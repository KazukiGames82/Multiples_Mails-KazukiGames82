;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=8

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

HLSelectedGroup0B1=([Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:X]),[Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:Y],([Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:W]),[Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:H],(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedGroup0B2=([Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:X]+(0.5*#DroptopSize#)),([Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:Y]+(0.5*#DroptopSize#)),([Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:W]-(0.5*#DroptopSize#)*2),([Group0_String_[#*Multiples_Mails___Mail_Index_Number*]:H]-(0.5*#DroptopSize#)*2),(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

HLSelectedGroup1B1=[[#*Group1_SelectedBox*]:X],[[#*Group1_SelectedBox*]:Y],[[#*Group1_SelectedBox*]:W],[[#*Group1_SelectedBox*]:H],(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedGroup1B2=([[#*Group1_SelectedBox*]:X]+(0.5*#DroptopSize#)),([[#*Group1_SelectedBox*]:Y]+(0.5*#DroptopSize#)),([[#*Group1_SelectedBox*]:W]-(0.5*#DroptopSize#)*2),([[#*Group1_SelectedBox*]:H]-(0.5*#DroptopSize#)*2),(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

Group0_CurrentMail=Group99_String_0

Group0_String_1=1
Group0_String_2=2
Group0_String_3=3
Group0_String_4=4
Group0_String_5=5

Group0_Icon_1=1
Group0_Icon_2=2
Group0_Icon_3=3
Group0_Icon_4=4
Group0_Icon_5=5

Group1_CurrentBox=Group99_String_0
Group1_SelectedBox=Group99_String_0

Group1_Mail_Box_1=1
Group1_Mail_Box_2=2
Group1_Mail_Box_3=3
Group1_Mail_Box_4=4
Group1_Mail_Box_5=5
Group1_Mail_Box_6=6
Group1_Mail_Box_7=7
Group1_Mail_Box_8=8
Group1_Mail_Box_9=9
Group1_Mail_Box_10=10
Group1_Mail_Box_11=11
Group1_Mail_Box_12=12
Group1_Mail_Box_13=13
Group1_Mail_Box_14=14
Group1_Mail_Box_15=15
Group1_Mail_Box_16=16
Group1_Mail_Box_17=17
Group1_Mail_Box_18=18
Group1_Mail_Box_19=19
Group1_Mail_Box_20=20

Group1_Mail_Box_3_Return=1
Group1_Mail_Box_5_Return=3
Group1_Mail_Box_7_Return=5
Group1_Mail_Box_9_Return=7
Group1_Mail_Box_11_Return=9
Group1_Mail_Box_13_Return=11
Group1_Mail_Box_15_Return=13
Group1_Mail_Box_17_Return=15
Group1_Mail_Box_19_Return=17

Group1_Mail_Box_2_Return=1
Group1_Mail_Box_4_Return=3
Group1_Mail_Box_6_Return=5
Group1_Mail_Box_8_Return=7
Group1_Mail_Box_10_Return=9
Group1_Mail_Box_12_Return=11
Group1_Mail_Box_14_Return=13
Group1_Mail_Box_16_Return=15
Group1_Mail_Box_18_Return=17
Group1_Mail_Box_20_Return=19

Group1_String_1=1
Group1_String_2=2
Group1_String_3=3
Group1_String_4=4
Group1_String_5=5
Group1_String_6=6
Group1_String_7=7
Group1_String_8=8
Group1_String_9=9
Group1_String_10=10
Group1_String_11=11

Group99_String_0=0

BoxHeight1=50
BoxHeight2=50
BoxHeight3=50
BoxHeight4=50
BoxHeight5=50

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[NoActionStyle]
RightMouseUpAction=
RightMouseDownAction=
LeftMouseUpAction=
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=

[InfoStyle]
InlineSetting3=Case | Sentence

[IconStyle]

[ArrowStyleB]

[BoxStyle]

[TextStyle]

[HighlightStyle]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
Group=Highlight | HL
DynamicVariables=1

[MailStringStyle]
FontSize=(#DropdownItemFontSize#*0.8)
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
StringAlign=CenterBottom
Padding=
ClipString=0
X=((8*#DroptopSize#)-(8*#DroptopSize#)%1)R
Y=r
W=((#CURRENTCONFIGWIDTH#-((8*#DroptopSize#)-(8*#DroptopSize#)%1)*(#Multiples_Mails___Mail_Count#+1))/#Multiples_Mails___Mail_Count#)
H=(#DropdownItemHeight#+(1*#DroptopSize#)-(1*#DroptopSize#)%1)
Text=[#Multiples_Mails___Gmail_Num_[##CURRENTSECTION#]_Commas]
MouseOverAction=[!SetVariable Group0_CurrentMail [#CURRENTSECTION]][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption Group0_Icon_[##CURRENTSECTION#] ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup Group0][!UpdateMeterGroup Highlight][!Redraw]
MouseLeaveAction=[!SetVariable Group0_CurrentMail Group99_String_0][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption Group0_Icon_[##CURRENTSECTION#] ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeterGroup Group0][!UpdateMeterGroup Highlight][!Redraw]
LeftMouseDownAction=[!Hide "#CURRENTCONFIG#\Folder"][!SetVariable Multiples_Mails___Mail_Index_Char [##CURRENTSECTION#]][!SetVariable Multiples_Mails___Mail_Index_Number [##CURRENTSECTION#]][!SetVariable Group1_CurrentBox Group99_String_0][!SetVariable Group1_SelectedBox Group99_String_0][!UpdateMeasureGroup Group1][!UpdateMeterGroup Highlight][!UpdateMeterGroup Group1][!Redraw]
Hidden=(#Multiples_Mails___Mail_Count#=1?1:(#Multiples_Mails___Mail_Count#>([##CURRENTSECTION#]-1)?0:1))
Group=Group0

[MaiIconStyle]
ImageName=Icons\Mail[#Multiples_Mails___Gmail_Connected_[##CURRENTSECTION#]][#Multiples_Mails___Gmail_Status_[##CURRENTSECTION#]].png
Padding=#DropdownIconPadding#,(#DropdownIconPadding#-(3*#DroptopSize#)),#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
X=([Group0_String_[##CURRENTSECTION#]:X]+[Group0_String_[##CURRENTSECTION#]:W]/2-[#CURRENTSECTION#:W]/2)
Y=r
W=(#IconW#-(5*#DroptopSize#))
H=(#IconW#-(5*#DroptopSize#))
Hidden=(#Multiples_Mails___Mail_Count#=1?1:(#Multiples_Mails___Mail_Count#>([##CURRENTSECTION#]-1)?0:1))
Group=Group0

; -----------------

[MailBoxStyle]
Shape=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-((10*#DroptopSize#)-(10*#DroptopSize#)%1+#DropdownStrokeWidth#-#DropdownStrokeWidth#%1)*(([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]%2)=1?([##CURRENTSECTION#]=[#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]?2:3):3))/(([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]%2)=1?([##CURRENTSECTION#]=[#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]?1:2):2)),(50*#DroptopSize#),(#DropdownBGCorner#/2) | Extend FillColor | StrokeWidth 0
FillColor=FillColor #DropdownFontColor1#,18
X=(((10*#DroptopSize#)-(10*#DroptopSize#)%1+#DropdownStrokeWidth#-#DropdownStrokeWidth#%1)+[Group1_Mail_Box_[##CURRENTSECTION#_Return]:XW]*(([##CURRENTSECTION#]%2)=0?1:0))
Y=([#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]]=0?0:(([Group1_Mail_Box_[##CURRENTSECTION#_Return]:YH]+(([##CURRENTSECTION#]%2)=0?(-[Group1_Mail_Box_1:H]):((10*#DroptopSize#)-(10*#DroptopSize#)%1)))*([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]>([##CURRENTSECTION#]-1)?1:0)))
Group=PreviewMails | Group1
DynamicVariables=1
Hidden=([#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]>([##CURRENTSECTION#]-1)?([#Multiples_Mails___Mail_Preview_Count]>=[##CURRENTSECTION#]?0:1):1)))

[MailTitleStyle]
StringAlign=CenterCenter
FontSize=(11*#DroptopSize#)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/([#[#Group1_SelectedBox]]=[##CURRENTSECTION#]?1:2))
FontWeight=600
Padding=(11*#DroptopSize#),0,(11*#DroptopSize#),0
X=([Group1_Mail_Box_[##CURRENTSECTION#]:X]+[Group1_Mail_Box_[##CURRENTSECTION#]:W]/2)
Y=([Group1_Mail_Box_[##CURRENTSECTION#]:Y]+[Group1_Mail_Box_[##CURRENTSECTION#]:H]/2)
W=([Group1_Mail_Box_[##CURRENTSECTION#]:W]-((11*#DroptopSize#)-(11*#DroptopSize#)%1)*2)
H=([Group1_Mail_Box_[##CURRENTSECTION#]:H])
Text=[#Multiples_Mails___Mail_Author_[#Multiples_Mails___Mail_Index_Number]_[##CURRENTSECTION#]]
MouseOverAction=[!SetVariable Group1_CurrentBox [#CURRENTSECTION]][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup Group1][!UpdateMeterGroup Highlight][!Redraw]
MouseLeaveAction=[!SetVariable Group1_CurrentBox Group99_String_0][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/([#[#*Group1_SelectedBox*]]=[##*CURRENTSECTION*#]?1:2))"][!UpdateMeterGroup Group1][!UpdateMeterGroup Highlight][!Redraw]
LeftMouseDoubleClickAction=[!Hide "#CURRENTCONFIG#\Folder"][!EnableMouseActionGroup "MouseOverAction" Buttons00 "Droptop\DropdownBar"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"]["[#Multiples_Mails___Mail_Link_[#Multiples_Mails___Mail_Index_Number]_[##CURRENTSECTION#]]"][!HideMeter HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeasure MeasureActionTimer "Droptop\DropdownBar"][!Hide]
LeftMouseDownAction=[!ShowMeter Group1_HighlightSelected][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder[##CURRENTSECTION#].ini"][!Move ([#CURRENTCONFIGX]-(400*#DroptopSize#)-#DropdownSubMenuXOffset#+[#SysAppMenuXOffset]+1) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]) "#CURRENTCONFIG#\Folder"][!SetVariable Multiples_Mails___Mail_Index_Account [#Multiples_Mails___Mail_Index_Number] "#CURRENTCONFIG#\Folder"][!SetVariable Multiples_Mails___Mail_Index_Number [##CURRENTSECTION#] "#CURRENTCONFIG#\Folder"][!#Show# "#CURRENTCONFIG#\Folder"][!UpdateMeter * "#CURRENTCONFIG#\Folder"][!UpdateMeter * "#CURRENTCONFIG#\Folder"][!Redraw "#CURRENTCONFIG#\Folder"][!SetVariable Group1_SelectedBox [#CURRENTSECTION]][!UpdateMeterGroup Group1][!UpdateMeterGroup Highlight][!Redraw]
Hidden=([#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]>([##CURRENTSECTION#]-1)?([#Multiples_Mails___Mail_Preview_Count]>=[##CURRENTSECTION#]?0:1):1)))
Group=Group1

;-----------------------------------------

[Background]
DynamicVariables=1

[Background2]
Meter=Shape
MeterStyle=BackgroundStyle
DynamicVariables=1

[Background3]
Meter=Shape
MeterStyle=BackgroundStyle
DynamicVariables=1

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

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

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

;----------------------------------------------------

[Box1]
MeterStyle=BoxStyle

[Box2]
MeterStyle=BoxStyle

[Box3]
MeterStyle=BoxStyle

[Box4]
MeterStyle=BoxStyle

[Box5]
MeterStyle=BoxStyle

;----------------------------------------------------

[Group0_HighlightBackground]
Meter=Shape
MeterStyle=HighlightStyle

[Group0_HighlightSelected]
Meter=Shape
MeterStyle=HighlightStyle

; --------------------------------------------

[Group0_String_1]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailStringStyle

[Group0_String_2]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailStringStyle

[Group0_String_3]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailStringStyle

[Group0_String_4]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailStringStyle

[Group0_String_5]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailStringStyle

; --------------------------------------------

[Group0_Icon_1]
Meter=Image
MeterStyle=IconStyle | MaiIconStyle | NoActionStyle

[Group0_Icon_2]
Meter=Image
MeterStyle=IconStyle | MaiIconStyle | NoActionStyle

[Group0_Icon_3]
Meter=Image
MeterStyle=IconStyle | MaiIconStyle | NoActionStyle

[Group0_Icon_4]
Meter=Image
MeterStyle=IconStyle | MaiIconStyle | NoActionStyle

[Group0_Icon_5]
Meter=Image
MeterStyle=IconStyle | MaiIconStyle | NoActionStyle

; ===========================================================================

[Group1_Mail_Account_String]
Meter=String
MeterStyle=InfoStyle | NoActionStyle

; --------------------------------------------

[Group1_Mail_Box_1]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_2]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_3]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_4]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_5]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_6]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_7]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_8]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_9]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_10]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

[Group1_Mail_Box_11]
Meter=Shape
MeterStyle=MailBoxStyle | NoActionStyle

;----------------------------------------------------

[Group1_HighlightBackground]
Meter=Shape
MeterStyle=HighlightStyle

[Group1_HighlightSelected]
Meter=Shape
MeterStyle=HighlightStyle

; --------------------------------------------

[Group1_String_1]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_2]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_3]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_4]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_5]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_6]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_7]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_8]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_9]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_10]
Meter=String
MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

[Group1_String_11]
Meter=String

MeterStyle=InfoStyle | NoActionStyle | MailTitleStyle

; ===========================================================================

[Group99_String_0]
Meter=String
