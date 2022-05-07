Public Class Form5
    Dim Sajin As Integer = 1
    Dim Sajin_Max As Integer = 6
    Private Sub Form4_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Image = Image.FromFile(CurDir() &
                                     "\돌아서는 오버액션토끼\" & Sajin & ".jpg")
        Sajin += 1
        If Sajin > Sajin_Max Then
            Sajin = 1
        End If
    End Sub
End Class