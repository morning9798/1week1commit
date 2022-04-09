Public Class Form2
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iDan As Integer

        TextBox2.Text = ""
        For iDan = 1 To 9
            For i = 1 To 9
                TextBox2.Text = TextBox2.Text & iDan & " X " & i _
                    & " = " & iDan * i & vbCrLf
            Next
            TextBox2.Text = TextBox2.Text & vbCrLf
        Next
    End Sub
End Class