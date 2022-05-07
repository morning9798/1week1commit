Public Class Form3
    Dim Sajin As Integer = 1
    Dim Sajin_Max As Integer = 4
    Private Sub Form3_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Image = Image.FromFile(CurDir() &
                                     "\엄마에게 다가가는 새끼 코끼리\" & Sajin & ".jpg")
        Sajin += 1
        If Sajin > Sajin_Max Then
            Sajin = 1
        End If
    End Sub
End Class