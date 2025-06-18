object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 534
  ClientWidth = 748
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 32
    Top = 312
    Width = 273
    Height = 105
  end
  object Label1: TLabel
    Left = 560
    Top = 48
    Width = 37
    Height = 13
    Caption = #1053#1072#1095#1072#1083#1086
  end
  object Label2: TLabel
    Left = 560
    Top = 80
    Width = 31
    Height = 13
    Caption = #1050#1086#1085#1077#1094
  end
  object Label3: TLabel
    Left = 529
    Top = 128
    Width = 68
    Height = 13
    Caption = #1050#1086#1083'-'#1074#1086' '#1090#1086#1095#1077#1082
  end
  object Label4: TLabel
    Left = 560
    Top = 160
    Width = 21
    Height = 13
    Caption = #1064#1072#1075
  end
  object Chart1: TChart
    Left = 32
    Top = 24
    Width = 273
    Height = 169
    Title.Text.Strings = (
      'TChart')
    TabOrder = 0
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series2: TFastLineSeries
      LinePen.Color = 3513587
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object Button2: TButton
    Left = 32
    Top = 216
    Width = 273
    Height = 25
    Caption = #1053#1072#1088#1080#1089#1086#1074#1072#1090#1100
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button4: TButton
    Left = 32
    Top = 440
    Width = 75
    Height = 25
    Caption = #1053#1072#1088#1080#1089#1086#1074#1072#1090#1100
    TabOrder = 2
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 616
    Top = 50
    Width = 57
    Height = 21
    TabOrder = 3
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 616
    Top = 77
    Width = 57
    Height = 21
    TabOrder = 4
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 616
    Top = 125
    Width = 57
    Height = 21
    TabOrder = 5
    Text = 'Edit3'
  end
  object Button1: TButton
    Left = 598
    Top = 216
    Width = 75
    Height = 25
    Caption = #1047#1072#1076#1072#1090#1100
    TabOrder = 6
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 351
    Top = 24
    Width = 138
    Height = 169
    Lines.Strings = (
      '')
    TabOrder = 7
  end
  object Button3: TButton
    Left = 351
    Top = 216
    Width = 138
    Height = 25
    Caption = #1047#1085#1072#1095#1077#1085#1080#1103' '#1088#1072#1079#1083#1086#1078#1077#1085#1080#1103
    TabOrder = 8
    OnClick = Button3Click
  end
  object Edit4: TEdit
    Left = 616
    Top = 157
    Width = 57
    Height = 21
    TabOrder = 9
    Text = 'Edit4'
  end
end
