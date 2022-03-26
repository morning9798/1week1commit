Public Class Form4
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        TextBox2.Text = Microsoft.VisualBasic.Left(TextBox1.Text, 3)
        TextBox3.Text = Microsoft.VisualBasic.Right(TextBox1.Text, 3)
        TextBox4.Text = Mid(TextBox1.Text, 5, 3)
        TextBox5.Text = Len(TextBox1.Text)
    End Sub
End Class