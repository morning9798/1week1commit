Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iDan As Integer

        iDan = TextBox1.Text

        TextBox2.Text = "" 'Clear의 의미
        For i = 1 To 9
            TextBox2.Text = TextBox2.Text & iDan & " X " & i _
                & " = " & iDan * i & vbCrLf
        Next
    End Sub
End Class
