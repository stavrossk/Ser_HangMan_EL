object Form1: TForm1
  Left = 240
  Top = 198
  Width = 609
  Height = 275
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object DateTimePicker1: TDateTimePicker
    Left = 136
    Top = 72
    Width = 186
    Height = 21
    CalAlignment = dtaLeft
    Date = 39534.7722249884
    Time = 39534.7722249884
    DateFormat = dfShort
    DateMode = dmComboBox
    Kind = dtkDate
    ParseInput = False
    TabOrder = 0
  end
  object DateTimePicker2: TDateTimePicker
    Left = 368
    Top = 72
    Width = 186
    Height = 21
    CalAlignment = dtaLeft
    Date = 39534.7726718171
    Time = 39534.7726718171
    DateFormat = dfShort
    DateMode = dmComboBox
    Kind = dtkTime
    ParseInput = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 296
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 2
    OnMouseDown = Button1MouseDown
  end
end
