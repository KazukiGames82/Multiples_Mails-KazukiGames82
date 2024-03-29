;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1

[Variables]
CustomAppPosition=8

FolderNumber=4

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

DropdownMenuWidth=(400*#DroptopSize#)

NumberOfItems=3
NumberOfDividers=0

Multiples_Mails___Mail_Index_Account=1
Multiples_Mails___Mail_Index_Number=1

Padding0=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)

HLSelectedShapeB1=[[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:X],[[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:Y],[[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:W],[[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:H],[#DropdownHighlightCorner] | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedShapeB2=([[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:X]+(0.5*#DroptopSize#)),([[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:Y]+(0.5*#DroptopSize#)),([[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:W]-(1*#DroptopSize#)),([[#HighlightSelectedY[#[#*CURRENTSECTION*]]]:H]-(1*#DroptopSize#)),[#DropdownHighlightCorner] | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

HighlightSelectedY1=1
HighlightSelectedY2=2
HighlightSelectedY3=3

HighlightSelected=1
HighlightSelected2=2
HighlightSelected3=3

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
; SolidColor=255,0,0,55
ClipString=2
X=(#CURRENTCONFIGWIDTH#/2)
Padding=((10*#DroptopSize#)-(10*#DroptopSize#)%1),(((5*#DroptopSize#)-(5*#DroptopSize#)%1)+(#DropdownItemPaddingY#)),((10*#DroptopSize#)-(10*#DroptopSize#)%1),(((5*#DroptopSize#)-(5*#DroptopSize#)%1)+(#DropdownItemPaddingY#*-1))
W=([#CURRENTCONFIGWIDTH]-[1:Y]*2-((10*#DroptopSize#)-(10*#DroptopSize#)%1)*2)
StringAlign=CenterTop
LeftMouseDownAction=
MouseOverAction=
TrailingSpaces=0
MouseLeaveAction=

[IconStyle]
ImageName=
Hidden=1

[ArrowStyleB]
Hidden=1

;----------------------------------------------------
; Backgrounds
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),([3:YH]+[1:Y]+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#

;----------------------------------------------------
; Highlight
;----------------------------------------------------

[HighlightBackground]

[HighlightSelected]
Shape=Rectangle [#HLSelectedShapeB2]
Shape2=
Shape3=
Shape4=
Y=0
X=0
Hidden=0

;-----------------------------------------

[1]
MeterStyle=InfoStyle
StringAlign=CenterCenter
FontSize=(#DropdownItemFontSize#*1.5)
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
Y=((#DropdownIconYoffset#+#DropdownItemHeight#)-((#DropdownIconYoffset#+#DropdownItemHeight#)%1)+#DropdownItemYOffset#)
Text=[#Multiples_Mails___Mail_Author_[#Multiples_Mails___Mail_Index_Account]_[#Multiples_Mails___Mail_Index_Number]]

[2]
MeterStyle=InfoStyle
FontSize=(#DropdownItemFontSize#*1.3)
Text=[#Multiples_Mails___Mail_Title_[#Multiples_Mails___Mail_Index_Account]_[#Multiples_Mails___Mail_Index_Number]]
Y=((10*#DroptopSize#)-(10*#DroptopSize#)%1)R
H=

[3]
MeterStyle=InfoStyle
FontSize=(#DropdownItemFontSize#*1.1)
Text=[#Multiples_Mails___Mail_Summary_[#Multiples_Mails___Mail_Index_Account]_[#Multiples_Mails___Mail_Index_Number]]
Y=((20*#DroptopSize#)-(20*#DroptopSize#)%1)R
H=

[4]
MeterStyle=InfoStyle

[5]
MeterStyle=InfoStyle

[6]
MeterStyle=InfoStyle

[7]
MeterStyle=InfoStyle

[8]
MeterStyle=InfoStyle

[9]
MeterStyle=InfoStyle

[10]
MeterStyle=InfoStyle

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle
Hidden=1

[2Icon]
MeterStyle=IconStyle
Hidden=1

[3Icon]
MeterStyle=IconStyle
Hidden=1

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle
