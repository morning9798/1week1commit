<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class 배열로
    Inherits System.Windows.Forms.Form

    'Form은 Dispose를 재정의하여 구성 요소 목록을 정리합니다.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Windows Form 디자이너에 필요합니다.
    Private components As System.ComponentModel.IContainer

    '참고: 다음 프로시저는 Windows Form 디자이너에 필요합니다.
    '수정하려면 Windows Form 디자이너를 사용하십시오.  
    '코드 편집기에서는 수정하지 마세요.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Button2 = New System.Windows.Forms.Button()
        Me.TextBox2 = New System.Windows.Forms.TextBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.TextBox3 = New System.Windows.Forms.TextBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Label1.Location = New System.Drawing.Point(34, 42)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(245, 29)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "평문:영어 소문자"
        '
        'TextBox1
        '
        Me.TextBox1.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.TextBox1.Location = New System.Drawing.Point(39, 85)
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(1326, 41)
        Me.TextBox1.TabIndex = 1
        '
        'Button1
        '
        Me.Button1.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Button1.Location = New System.Drawing.Point(585, 182)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(155, 51)
        Me.Button1.TabIndex = 2
        Me.Button1.Text = "암호화"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Label2.Location = New System.Drawing.Point(1224, 42)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(141, 29)
        Me.Label2.TabIndex = 3
        Me.Label2.Text = "<송신측>"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Label3.Location = New System.Drawing.Point(647, 386)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(107, 116)
        Me.Label3.TabIndex = 7
        Me.Label3.Text = "↓" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "↓ 전송" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "↓" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "↓"
        '
        'Button2
        '
        Me.Button2.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Button2.Location = New System.Drawing.Point(585, 542)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(155, 51)
        Me.Button2.TabIndex = 6
        Me.Button2.Text = "복호화"
        Me.Button2.UseVisualStyleBackColor = True
        '
        'TextBox2
        '
        Me.TextBox2.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.TextBox2.Location = New System.Drawing.Point(39, 311)
        Me.TextBox2.Name = "TextBox2"
        Me.TextBox2.Size = New System.Drawing.Size(1326, 41)
        Me.TextBox2.TabIndex = 5
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Label4.Location = New System.Drawing.Point(34, 268)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(245, 29)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "평문:영어 대문자"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Label5.Location = New System.Drawing.Point(1224, 628)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(141, 29)
        Me.Label5.TabIndex = 10
        Me.Label5.Text = "<수신측>"
        '
        'TextBox3
        '
        Me.TextBox3.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.TextBox3.Location = New System.Drawing.Point(39, 671)
        Me.TextBox3.Name = "TextBox3"
        Me.TextBox3.Size = New System.Drawing.Size(1326, 41)
        Me.TextBox3.TabIndex = 9
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("굴림", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(129, Byte))
        Me.Label6.Location = New System.Drawing.Point(34, 628)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(316, 29)
        Me.Label6.TabIndex = 8
        Me.Label6.Text = "다시 평문:영어 소문자"
        '
        '배열로
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(1474, 827)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.TextBox3)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Button2)
        Me.Controls.Add(Me.TextBox2)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.TextBox1)
        Me.Controls.Add(Me.Label1)
        Me.Name = "배열로"
        Me.Text = "배열로"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents TextBox1 As TextBox
    Friend WithEvents Button1 As Button
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Button2 As Button
    Friend WithEvents TextBox2 As TextBox
    Friend WithEvents Label4 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents TextBox3 As TextBox
    Friend WithEvents Label6 As Label
End Class
