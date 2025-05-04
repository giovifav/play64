
' List Type
Type TgameList
    Field itemHeight:Int
    Field scrollSpeed:Float
    Field scrollPosition:Float
    Field maxItems:Int
    Field listHeight:Int
    Field items:String[]
    Field selectedIndex:Int
    Field x:Int, y:Int, width:Int

    ' Constructor
    Method New()
        Self.x = 0
        Self.y = 0
        Self.width = 64
        Self.listHeight = 64
        Self.itemHeight = 12
        Self.scrollSpeed = 0.5
        Self.scrollPosition = 0
        Self.selectedIndex = 0
        Local fileList:String[] = []
        Local dir:Byte Ptr  = ReadDir("carts")
        If Not dir RuntimeError "failed to read current directory"
        If dir
            Local fileCount:Int = 0
            Local maxFiles:Int = 1000 ' Limit the number of files read
            Repeat
                Local t:String = NextFile( dir )
                If t="" Exit
                If t="." Or t=".." Continue
                fileList :+ [ StripAll(t)] ' Append file name to the array
            Forever
            CloseDir(dir)
        EndIf
        Self.maxItems = fileList.Length
        Self.items = fileList
    End Method

    ' Update the list (handle input and scrolling)
    Method Update()
        ' Update selected index
        If IsKeyPressed(KEY_UP) Then
            selectedIndex = Max(selectedIndex - 1, 0) ' Move selection up
            PlaySound( sounds_Menu_In, Null )
        EndIf
        If IsKeyPressed(KEY_DOWN) Then
            selectedIndex = Min(selectedIndex + 1, maxItems - 1) ' Move selection down
            PlaySound( sounds_Menu_In, Null )
        EndIf

        ' Ensure the selected item is visible by adjusting scroll position
        If selectedIndex * itemHeight < scrollPosition Then
            scrollPosition = selectedIndex * itemHeight
        ElseIf (selectedIndex + 1) * itemHeight > scrollPosition + listHeight Then
            scrollPosition = (selectedIndex + 1) * itemHeight - listHeight
        EndIf
        If IsKeyPressed( KEY_Z ) Then
            PlaySound( sounds_Menu_Out, Null )
            LoadLua(items[selectedIndex])
        EndIf
    End Method

    ' Draw the list
    Method Draw()
        ClearBackground(getPalette(3)) ' Clear background with a color from the palette
        For Local i:Int = 0 To maxItems - 1
            Local yPosition:Int = i * itemHeight - scrollPosition + y
            If yPosition >= y And yPosition < y + listHeight Then
                ' Highlight the selected item
                If i = selectedIndex Then
                    DrawRectangle(x , yPosition, width , itemHeight-1, getPalette(2))
                EndIf
                DrawText(items[i], x + 2, yPosition, 2, getPalette(0))
            EndIf
        Next
    End Method
End Type

