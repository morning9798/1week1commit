Public Class Form3
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iDan As Integer

        TextBox2.Text = ""
        For iDan = 1 To 9 Step 3
            For i = 1 To 9
                For iTab = 0 To 2

                    TextBox2.Text = TextBox2.Text & iDan + iTab & " X " & i _
                    & " = " & (iDan + iTab) * i & "    "
                Next
                TextBox2.Text = TextBox2.Text & vbCrLf
            Next
            TextBox2.Text = TextBox2.Text & vbCrLf
        Next
    End Sub
End Class