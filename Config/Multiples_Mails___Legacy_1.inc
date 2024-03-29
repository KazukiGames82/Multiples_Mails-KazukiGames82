[Rainmeter]
Update=-1

[Variables]
DropdownMenuWidth=(#SCREENAREAWIDTH#/1.5)
DropdownItemHeight=(#SCREENAREAHEIGHT#/1.5)

[NoActionStyle]
Hidden=1

[HighlightStyle]
Hidden=1

[MailStringStyle]
Hidden=1

[MaiIconStyle]
Hidden=1

[MailBoxStyle]
Shape=
X=
Y=
Hidden=1

[MailTitleStyle]
Hidden=1

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#

[LoadingIcon]
Meter=Image
ImageName=#CURRENTPATH#Icons\0Icon.png
MeterStyle=IconStyle
X=((#CURRENTCONFIGWIDTH#/2)-64)
Y=((#CURRENTCONFIGHEIGHT#/2)-64)
ImageAlpha=155
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha 255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha 155][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!Refresh]
W=128
H=128
Padding=
Hidden=0
MouseOverAction=

;----------------------------------------------------
; Plugin
;----------------------------------------------------

[Plugin.WebView]
Measure=Plugin
Plugin=WebView
URL=https://mail.google.com/mail/
X=(#DropdownMenuCutout#+#DropdownMenuCutout#)
Y=(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#+#DropdownItemYOffset#+#DropdownStrokeWidth#/2)
; W=(#DropdownMenuWidth#+#SdysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)-#DropdownStrokeWidth#)
W=(#DropdownMenuWidth#-(#DropdownMenuCutout#*2))
H=(#DropdownItemHeight#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)-#DropdownMenuCutout#-#DropdownStrokeWidth#-(#DropdownItemYOffset#*2))