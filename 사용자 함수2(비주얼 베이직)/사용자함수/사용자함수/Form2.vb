Public Class Form2
    Dim Sajin_1 As Integer = 1
    Dim Sajin_2 As Integer = 1
    Dim Sajin_3 As Integer = 1
    Dim Sajin_1_Max As Integer = 5
    Dim Sajin_2_Max As Integer = 5
    Dim Sajin_3_Max As Integer = 5

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Image = Image.FromFile(CurDir() & "/쿠션/" & Sajin_1 & ".jpg")
        Sajin_1 += 1
        If Sajin_1 > Sajin_1_Max Then
            Sajin_1 = 1
        End If
    End Sub

    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        PictureBox2.Image = Image.FromFile(CurDir() & "/노트북/" & Sajin_2 & ".jpg")
        Sajin_2 += 1
        If Sajin_2 > Sajin_2_Max Then
            Sajin_2 = 1
        End If
    End Sub

    Private Sub Timer3_Tick(sender As Object, e As EventArgs) Handles Timer3.Tick
        PictureBox3.Image = Image.FromFile(CurDir() & "/에어팟/" & Sajin_3 & ".jpg")
        Sajin_3 += 1
        If Sajin_3 > Sajin_3_Max Then
            Sajin_3 = 1
        End If
    End Sub

    Private Sub 종료ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 종료ToolStripMenuItem.Click
        End
    End Sub

    Private Sub 빠르게ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 빠르게ToolStripMenuItem.Click
        Timer1.Interval = 10 : Timer2.Interval = 10 : Timer3.Interval = 10
    End Sub

    Private Sub 중간ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 중간ToolStripMenuItem.Click
        Timer1.Interval = 500 : Timer2.Interval = 500 : Timer3.Interval = 500
    End Sub

    Private Sub 느리게ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 느리게ToolStripMenuItem.Click
        Timer1.Interval = 1000 : Timer2.Interval = 1000 : Timer3.Interval = 1000
    End Sub

    Private Sub 빠르게ToolStripMenuItem1_Click(sender As Object, e As EventArgs) Handles 빠르게ToolStripMenuItem1.Click
        Timer1.Interval = 10
    End Sub

    Private Sub 중간ToolStripMenuItem1_Click(sender As Object, e As EventArgs) Handles 중간ToolStripMenuItem1.Click
        Timer1.Interval = 500
    End Sub

    Private Sub 느리ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 느리ToolStripMenuItem.Click
        Timer1.Interval = 1000
    End Sub

    Private Sub 빠르게ToolStripMenuItem2_Click(sender As Object, e As EventArgs) Handles 빠르게ToolStripMenuItem2.Click
        Timer2.Interval = 10
    End Sub

    Private Sub 중간ToolStripMenuItem2_Click(sender As Object, e As EventArgs) Handles 중간ToolStripMenuItem2.Click
        Timer2.Interval = 500
    End Sub

    Private Sub 느리게ToolStripMenuItem1_Click(sender As Object, e As EventArgs) Handles 느리게ToolStripMenuItem1.Click
        Timer2.Interval = 1000
    End Sub

    Private Sub 빠르게ToolStripMenuItem3_Click(sender As Object, e As EventArgs) Handles 빠르게ToolStripMenuItem3.Click
        Timer3.Interval = 10
    End Sub

    Private Sub 중간ToolStripMenuItem3_Click(sender As Object, e As EventArgs) Handles 중간ToolStripMenuItem3.Click
        Timer3.Interval = 500
    End Sub

    Private Sub 느리게ToolStripMenuItem2_Click(sender As Object, e As EventArgs) Handles 느리게ToolStripMenuItem2.Click
        Timer3.Interval = 1000
    End Sub

    Private Sub 정ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 정ToolStripMenuItem.Click
        If Timer1.Enabled = True And Timer2.Enabled = True And Timer3.Enabled = True Then
            Timer1.Enabled = False : Timer2.Enabled = False : Timer3.Enabled = False
            정ToolStripMenuItem.Text = "전체 동작"
        ElseIf Timer1.Enabled = False And Timer2.Enabled = False And Timer3.Enabled = False Then
            Timer1.Enabled = True : Timer2.Enabled = True : Timer3.Enabled = True
            정ToolStripMenuItem.Text = "전체 중지"
        End If
    End Sub

    Private Sub 개발환경ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 개발환경ToolStripMenuItem.Click
        MessageBox.Show("운영체제 : Window 10" + Environment.NewLine + "개발 툴 : Microsoft Visual Studio 2019", "[개발환경]")
    End Sub

    Private Sub 개발자소개ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 개발자소개ToolStripMenuItem.Click
        Dim 개발자소개 As Form3 = New Form3()
        개발자소개.Show()
    End Sub

    Private Sub 교수님에게하고싶은말ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles 교수님에게하고싶은말ToolStripMenuItem.Click
        Dim 교수님에게하고싶은말 As Form4 = New Form4()
        교수님에게하고싶은말.Show()
    End Sub
End Class