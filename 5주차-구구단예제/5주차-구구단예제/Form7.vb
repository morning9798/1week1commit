Public Class Form7
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iDan As Integer
        Dim i As Integer = 1

        iDan = TextBox1.Text

        TextBox2.Text = ""

        Do
            TextBox2.Text = TextBox2.Text & iDan & " X " & i _
                    & " = " & iDan * i & vbCrLf
            i += 1
        Loop Until i > 9
    End Sub
End Class