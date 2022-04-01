Public Class Form3
    Private Sub Form3_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iSutja As Integer
        Dim dSum As Double

        iSutja = TextBox1.Text

        TextBox2.Text = ""

        For i = iSutja To 1 Step -1
            dSum = dSum + i
            If i = 1 Then
                TextBox2.Text = TextBox2.Text & i & " = " & dSum
            Else
                TextBox2.Text = TextBox2.Text & i & " + "
            End If
        Next

    End Sub
End Class