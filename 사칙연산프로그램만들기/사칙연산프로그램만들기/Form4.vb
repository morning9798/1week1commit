Public Class Form4
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iSutja As Integer
        Dim dNum_Odd, dNum_Even As Double


        iSutja = TextBox1.Text

        TextBox2.Text = ""
        TextBox3.Text = ""

        For i = 1 To iSutja Step 1
            If i Mod 2 = 0 Then '짝수
                dNum_Even = iSutja + i
                If i = iSutja Or i = iSutja - 1 Then
                    TextBox3.Text = TextBox3.Text & i & " = "
                Else
                    TextBox3.Text = TextBox3.Text & i & " + "
                End If
            Else
                dNum_Odd = iSutja + i
                If i = iSutja Or i = iSutja - 1 Then
                    TextBox2.Text = TextBox2.Text & i & " = "
                Else
                    TextBox2.Text = TextBox2.Text & i & " + "

                End If
            End If
        Next
        TextBox2.Text = TextBox2.Text & dNum_Odd
        TextBox3.Text = TextBox3.Text & dNum_Even

    End Sub
End Class