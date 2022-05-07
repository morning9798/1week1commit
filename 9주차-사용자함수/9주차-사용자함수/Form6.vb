Public Class Form6
    Dim Sajin1 As Integer = 1
    Dim Sajin_Max1 As Integer = 4
    Dim Sajin2 As Integer = 1
    Dim Sajin_Max2 As Integer = 5
    Dim Sajin3 As Integer = 1
    Dim Sajin_Max3 As Integer = 6
    Private Sub Form6_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        PictureBox1.Image = Image.FromFile(CurDir() &
                                     "\엄마에게 다가가는 새끼 코끼리\" & Sajin1 & ".jpg")
        PictureBox2.Image = Image.FromFile(CurDir() &
                                     "\다가오는 코끼리 두마리\" & Sajin2 & ".jpg")
        PictureBox3.Image = Image.FromFile(CurDir() &
                                     "\돌아서는 오버액션토끼\" & Sajin3 & ".jpg")

        Sajin1 += 1 : Sajin2 += 1 : Sajin3 += 1
        If Sajin1 > Sajin_Max1 Then
            Sajin1 = 1
        End If

        If Sajin2 > Sajin_Max2 Then
            Sajin2 = 1
        End If

        Sajin3 += 1
        If Sajin3 > Sajin_Max3 Then
            Sajin3 = 1
        End If
    End Sub
End Class