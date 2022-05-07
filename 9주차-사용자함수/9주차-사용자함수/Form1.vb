Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        PictureBox1.Image = Image.FromFile(CurDir() &
                                          "\신호등\신호등(준비중).png")
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        PictureBox1.Image = Image.FromFile(CurDir() &
                                         "\신호등\신호등(적색).png")
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        PictureBox1.Image = Image.FromFile(CurDir() &
                                         "\신호등\신호등(노란색).png")
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        PictureBox1.Image = Image.FromFile(CurDir() &
                                         "\신호등\신호등(녹색).png")
    End Sub
End Class
