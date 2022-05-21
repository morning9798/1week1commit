Public Class 배열로
    Dim sAlphabet_Small() As String = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}
    Dim sAlphabet_Big() As String = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"}

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If TextBox1.Text = "" Then
            MessageBox.Show("평문을 영어 소문자로 입력하세요", "경고 1")
            TextBox1.Focus()
            Exit Sub
        End If

        Dim iMunjang_Len As Integer
        iMunjang_Len = Len(TextBox1.Text)
        Dim sMunjang(iMunjang_Len) As String

        For i = 0 To iMunjang_Len - 1
            sMunjang(i) = Mid(TextBox1.Text, i + 1, 1) ' 문장을 한글자씩 잘라서 배열에 저장
        Next

        'TextBox2.Text = ""
        'For i = 0 To iMunjang_Len - 1
        '   TextBox2.Text = TextBox2.Text & sMunjang(i) ' 저장한 배열을 출력
        'Next

        Dim iCount As Integer = 0
        For i = 0 To iMunjang_Len - 1
            For j = 0 To 25
                If sMunjang(i) = sAlphabet_Small(j) Then
                    iCount += 1
                End If
            Next
            If iCount = 0 Then
                MessageBox.Show("입력된 문장에 영어 소문자가 아닙니다.", "경고 2")
                TextBox1.Focus()
                TextBox1.SelectionStart = i
                TextBox1.SelectionLength = 1
                Exit Sub
            End If
            iCount = 0
        Next

        TextBox2.Text = ""

        For i = 0 To iMunjang_Len - 1 ' 대문자로 바꾸고 뒤로 + 3
            For j = 0 To 25
                If sMunjang(i) = sAlphabet_Small(j) Then
                    If j + 3 > 25 Then
                        TextBox2.Text = TextBox2.Text & sAlphabet_Big((j + 3) - 26) ' xyz 는 한바퀴 돌아서 abc로 
                    Else
                        TextBox2.Text = TextBox2.Text & sAlphabet_Big(j + 3)
                    End If
                End If
            Next
        Next
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        If TextBox2.Text = "" Then
            MessageBox.Show("암호문을 영어 대문자로 입력하세요", "경고 1-1")
            TextBox2.Focus()
            Exit Sub
        End If

        Dim iMunjang_Len As Integer
        iMunjang_Len = Len(TextBox2.Text)
        Dim sMunjang(iMunjang_Len) As String

        For i = 0 To iMunjang_Len - 1
            sMunjang(i) = Mid(TextBox2.Text, i + 1, 1) ' 문장을 한글자씩 잘라서 배열에 저장
        Next

        Dim iCount As Integer = 0

        For i = 0 To iMunjang_Len - 1
            For j = 0 To 25
                If sMunjang(i) = sAlphabet_Big(j) Then
                    iCount += 1
                End If
            Next
            If iCount = 0 Then
                MessageBox.Show("입력된 문장에 영어 대문자가 아닙니다.", "경고 2-1")
                TextBox2.Focus()
                TextBox2.SelectionStart = i
                TextBox2.SelectionLength = 1
                Exit Sub
            End If
            iCount = 0
        Next

        TextBox3.Text = ""

        For i = 0 To iMunjang_Len - 1 ' 소문자로 바꾸고 앞으로 - 3
            For j = 0 To 25
                If sMunjang(i) = sAlphabet_Big(j) Then
                    If j - 3 < 0 Then
                        TextBox3.Text = TextBox3.Text & sAlphabet_Small((j - 3) + 26) ' abc 는 한바퀴 돌아서 xyz로 
                    Else
                        TextBox3.Text = TextBox3.Text & sAlphabet_Small(j - 3)
                    End If
                End If
            Next
        Next
    End Sub
End Class
