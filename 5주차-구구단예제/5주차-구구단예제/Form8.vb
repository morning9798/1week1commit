Public Class Form8
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iDan As Integer = 1
        Dim i As Integer = 1

        TextBox2.Text = ""

        Do While iDan <= 9
            Do While i <= 9
                TextBox2.Text = TextBox2.Text & iDan & " X " & i _
                    & " = " & iDan * i & vbCrLf
                i += 1
            Loop
            iDan += 1
            TextBox2.AppendText(vbCrLf)
            i = 1
        Loop
    End Sub
End Class