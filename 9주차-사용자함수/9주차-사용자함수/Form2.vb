Public Class Form2
    Private Sub ChangeSinhodeung(ByVal Color As Byte)
        Select Case Color
            Case 0
                PictureBox1.Image = Image.FromFile(CurDir() &
                                     "\신호등\신호등(준비중).png")
            Case 1
                PictureBox1.Image = Image.FromFile(CurDir() &
                                         "\신호등\신호등(적색).png")
            Case 2
                PictureBox1.Image = Image.FromFile(CurDir() &
                                         "\신호등\신호등(노란색).png")
            Case 3
                PictureBox1.Image = Image.FromFile(CurDir() &
                                         "\신호등\신호등(녹색).png")
                ' Case 4
                '   PictureBox1.Image = Image.FromFile(CurDir() &
                '               "\신호등\신호등(노란색).png")
        End Select
    End Sub

    Private Sub Form2_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Call ChangeSinhodeung(0)
    End Sub
    Dim Sinho_Color As Integer = 1
    Dim Sinho_direction As Boolean = True 'true = 증가 fals = 감소
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        Call ChangeSinhodeung(Sinho_Color)

        If Sinho_direction = True Then
            Sinho_Color += 1
        Else
            Sinho_Color -= 1
        End If

        If Sinho_Color >= 3 Then
            Sinho_direction = False
        End If

        If Sinho_Color <= 1 Then
            Sinho_direction = True
        End If

        'Sinho_Color += 1

        'If Sinho_Color > 4 Then ' case 4 쓸때
        '    Sinho_Color = 1
        'End If
    End Sub
End Class