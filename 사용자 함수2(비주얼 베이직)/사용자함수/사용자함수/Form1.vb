Public Class Form1
    Dim Sajin_1 As Integer = 1
    Dim Sajin_2 As Integer = 1
    Dim Sajin_3 As Integer = 1
    Dim Sajin_1_Max As Integer = 5
    Dim Sajin_2_Max As Integer = 5
    Dim Sajin_3_Max As Integer = 5
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Image = Image.FromFile(CurDir() & "/쿠션/" & Sajin_1 & ".jpg")
        PictureBox2.Image = Image.FromFile(CurDir() & "/노트북/" & Sajin_2 & ".jpg")
        PictureBox3.Image = Image.FromFile(CurDir() & "/에어팟/" & Sajin_3 & ".jpg")

        Sajin_1 += 1
        Sajin_2 += 1
        Sajin_3 += 1

        If Sajin_1 > Sajin_1_Max Then
            Sajin_1 = 1
        End If
        If Sajin_2 > Sajin_2_Max Then
            Sajin_2 = 1
        End If
        If Sajin_3 > Sajin_3_Max Then
            Sajin_3 = 1
        End If
    End Sub
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Timer1.Interval = 1000
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Timer1.Interval = 500
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Timer1.Interval = 1
    End Sub

    Private Sub HScrollBar1_Scroll(sender As Object, e As ScrollEventArgs) Handles HScrollBar1.Scroll
        Timer1.Interval = HScrollBar1.Value
    End Sub
End Class
