Public Class 아스키코드로
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

        'Asc 는 아스키코드(숫자)로, chr은 아스키코드(문자)로

        For i = 0 To iMunjang_Len - 1
            If Asc(sMunjang(i)) < 97 Or Asc(sMunjang(i)) > 122 Then
                MessageBox.Show("입력된 문장에 영어 소문자가 아닙니다.", "경고 2")
                TextBox1.Focus()
                TextBox1.SelectionStart = i
                TextBox1.SelectionLength = 1
                Exit Sub
            End If
        Next

        TextBox2.Text = ""

        For i = 0 To iMunjang_Len - 1
            If Asc(sMunjang(i)) + 3 > 122 Then
                TextBox2.Text = TextBox2.Text & Chr(Asc(sMunjang(i)) - 97 + 3 + 39) ' 예) x이면 120 - 65 - 3 = 52을 대문자 A가 65이니까 + 39 하면 65 = A
            Else
                TextBox2.Text = TextBox2.Text & Chr(Asc(sMunjang(i)) - 97 + 3 + 65) ' 예) d이면 100 - 97 + 3 = 6을 대문자A가 65이니까 + 65 하면 71 = G 
            End If
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

        For i = 0 To iMunjang_Len - 1
            If Asc(sMunjang(i)) < 65 Or Asc(sMunjang(i)) > 90 Then
                MessageBox.Show("입력된 문장에 영어 대문자가 아닙니다.", "경고 2-1")
                TextBox2.Focus()
                TextBox2.SelectionStart = i
                TextBox2.SelectionLength = 1
                Exit Sub
            End If
        Next

        TextBox3.Text = ""

        For i = 0 To iMunjang_Len - 1
            If Asc(sMunjang(i)) - 3 < 65 Then
                TextBox3.Text = TextBox3.Text & Chr(Asc(sMunjang(i)) - 65 - 3 + 123) ' 예) A이면 65 - 65 - 3 = -3을 소문자 x가 120이니까 + 123 하면 120 = x
            Else
                TextBox3.Text = TextBox3.Text & Chr(Asc(sMunjang(i)) - 65 - 3 + 97) ' 예) D이면 68 - 65 - 3 = 0을 소문자 a가 97이니까 + 97 하면 97 = a 
            End If
        Next
    End Sub
End Class