Public Class Form2
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iSutja As Integer
        Dim dSum As Double

        iSutja = TextBox1.Text

        TextBox2.Text = ""

        For i = 1 To iSutja Step 1
            dSum = dSum + i
            TextBox2.Text = TextBox2.Text & i & " + "
        Next
        TextBox2.Text = Microsoft.VisualBasic.Left(TextBox2.Text, Len(TextBox2.Text) - 2)
        TextBox2.Text = TextBox2.Text & " = " & dSum
    End Sub
End Class