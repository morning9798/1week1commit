Public Class Form12
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim iDan As Integer = 1
        Dim i As Integer = 1

        TextBox2.Text = ""

        While (True)
            While (True)
                TextBox2.Text = TextBox2.Text & iDan & " X " & i _
                    & " = " & iDan * i & vbCrLf
                i += 1
                If i > 9 Then
                    Exit While
                End If
            End While
            iDan += 1
            TextBox2.AppendText(vbCrLf)
            i = 1
            If iDan > 9 Then
                Exit While
            End If
        End While
    End Sub
End Class