[Variables]
Multiples_Mails-KazukiGames82.LeftMouseDownAction=[!SetOption Multiples_Mails_KazukiGames82_String InlineSetting3 "Color | #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#*0.5)"][!UpdateMeterGroup Multiples_Mails-KazukiGames82][!DisableMouseAction Multiples_Mails-KazukiGames82 "MouseOverAction"]

;----------------------------------------------------
; Styles
;----------------------------------------------------

[Multiples_Mails-KazukiGames82.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*([#NetworkStatusVar]<>1?1:[#Multiples_Mails___Show_Icon])+([Multiples_Mails_KazukiGames82_String:W]+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/3.5)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/3.5)%1)*[#Multiples_Mails___Show_Icon])*(([#Multiples_Mails___Mail_Show_Unread_1]+[#Multiples_Mails___Mail_Show_Unread_2]+[#Multiples_Mails___Mail_Show_Unread_3]+[#Multiples_Mails___Mail_Show_Unread_4]+[#Multiples_Mails___Mail_Show_Unread_5])=0?0:1)*([#NetworkStatusVar]<>1?0:1))

[Multiples_Mails_KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Multiples_Mails-KazukiGames82]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
DynamicVariables=1
Container=SystemTrayContainer
Group=CustomApp[#Multiples_Mails-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Multiples_Mails-KazukiGames82]] | CustomAppButton | Multiples_Mails-KazukiGames82

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Multiples_Mails_KazukiGames82_Icon]
Meter=Image
MeterStyle=InfoStyle | Multiples_Mails_KazukiGames82_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Multiples_Mails-KazukiGames82\Button\Medium\[#Multiples_Mails___Icon_Index]\Mail[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*([#NetworkStatusVar]<>1?0.5:[#Multiples_Mails___Show_Icon]))
Padding=#SysIconPadding#
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Multiples_Mails-KazukiGames82]]]
Y=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*([#NetworkStatusVar]<>1?1:[#Multiples_Mails___Show_Icon]))
H=(#TopHeight#+#TopBarIconHOffset#)

[Multiples_Mails_KazukiGames82_String]
Meter=String
MeterStyle=InfoStyle | Multiples_Mails_KazukiGames82_Style
StringAlign=LeftCenter
InlinePattern3="\[#Multiples_Mails___Divisor_Symbol_[#Multiples_Mails___Divisor_Index]] "
InlineSetting3=Color | #TopBarFontColor1#,(#TopBarTitleOpacity#*0.5)
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(((#TopBarSysTextWPadding#*1.5)-(#TopBarSysTextWPadding#*1.5)%1)*(1-[#Multiples_Mails___Show_Icon])),#TopBarSysTextYPadding#,(((#TopBarSysTextWPadding#*1.5)-(#TopBarSysTextWPadding#*1.5)%1)*(1-[#Multiples_Mails___Show_Icon])),0
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#Multiples_Mails-KazukiGames82]]]+(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*[#Multiples_Mails___Show_Icon])
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
Text="[#Multiples_Mails___Mail_Unread_1[#Multiples_Mails___Mail_Show_Unread_1]][#Multiples_Mails___Mail_Divisor_[#Multiples_Mails___Mail_Show_Unread_1][#Multiples_Mails___Mail_Show_Unread_2][#Multiples_Mails___Mail_Show_Unread_3][#Multiples_Mails___Mail_Show_Unread_4][#Multiples_Mails___Mail_Show_Unread_5]][#Multiples_Mails___Mail_Unread_2[#Multiples_Mails___Mail_Show_Unread_2]][#Multiples_Mails___Mail_Divisor_[#Multiples_Mails___Mail_Show_Unread_2][#Multiples_Mails___Mail_Show_Unread_3][#Multiples_Mails___Mail_Show_Unread_4][#Multiples_Mails___Mail_Show_Unread_5]][#Multiples_Mails___Mail_Unread_3[#Multiples_Mails___Mail_Show_Unread_3]][#Multiples_Mails___Mail_Divisor_[#Multiples_Mails___Mail_Show_Unread_3][#Multiples_Mails___Mail_Show_Unread_4][#Multiples_Mails___Mail_Show_Unread_5]][#Multiples_Mails___Mail_Unread_4[#Multiples_Mails___Mail_Show_Unread_4]][#Multiples_Mails___Mail_Divisor_[#Multiples_Mails___Mail_Show_Unread_4][#Multiples_Mails___Mail_Show_Unread_5]][#Multiples_Mails___Mail_Unread_5[#Multiples_Mails___Mail_Show_Unread_5]]"
Hidden=([#NetworkStatusVar]<>1?1:0)

;----------------------------------------------------
; Main Meter
;----------------------------------------------------

[Multiples_Mails-KazukiGames82]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0
MouseOverAction=[!SetOption Multiples_Mails_KazukiGames82_String InlineSetting3 "Color | #*TopBarFontColor2*#,(#*TopBarTitleOpacity*#*0.5)"][!UpdateMeterGroup Multiples_Mails_KazukiGames82][!Redraw]
MouseLeaveAction=[!SetOption Multiples_Mails_KazukiGames82_String InlineSetting3 "Color | #*TopBarFontColor1*#,(#*TopBarTitleOpacity*#*0.5)"][!UpdateMeterGroup Multiples_Mails_KazukiGames82][!Redraw]