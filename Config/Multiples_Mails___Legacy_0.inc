[Rainmeter]
OnUnFocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"][!SetVariable Group1_SelectedBox Group99_String_0][!Delay 250][!HideMeter Group1_HighlightSelected][!UpdateMeterGroup Highlight][!UpdateMeter *][!Redraw][!Hide "#CURRENTCONFIG#\Folder"]
OnRefreshAction=[!SetVariable Multiples_Mails___CustomApp_Loaded 1 "Droptop\Other\BackgroundProcesses"]
OnCloseAction=[!SetVariable Multiples_Mails___CustomApp_Loaded 0 "Droptop\Other\BackgroundProcesses"]
Update=-1

; ===========================================================================

[RemainingMailCalc]
Measure=Calc
Formula=([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]-[#Multiples_Mails___Mail_Preview_Count])
RegExpSubstitute=1
Substitute="(\d)(?=(\d{3})+(?!\d))":"\1,","":"0"
DynamicVariables=1
UpdateDivider=-1
Group=Group1

[ReplaceUsername]
Measure=String
String=#MailItem1#
RegExpSubstitute=1
Substitute=[#Multiples_Mails___Mail_Censored_[#Multiples_Mails___Mail_Censored]]
DynamicVariables=1
UpdateDivider=-1
Group=Group1

; ===========================================================================

[Background]
Hidden=((#Multiples_Mails___Mail_Count#=1?([#Multiples_Mails___Gmail_Connected_1]=0?0:1):0))
Group=Group1 | Group2

[Background2]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),((#DropdownItemHeight#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)-#DropdownMenuCutout#+((50*#DroptopSize#)+((10*#DroptopSize#)-(10*#DroptopSize#)%1))*(Clamp((([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]%2)<>0?([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]/2+0.5):([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]/2)),0,(Floor(#Multiples_Mails___Mail_Preview_Count#/2)+1)))*[#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]])*[#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Y=(([Background:YH]+(3*#DroptopSize#))*(#Multiples_Mails___Mail_Count#=1?0:1)*[#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]])
LeftMouseDownAction=[!Hide "#CURRENTCONFIG#\Folder"][!SetVariable Group1_CurrentBox Group99_String_0][!SetVariable Group1_SelectedBox Group99_String_0][!UpdateMeasureGroup Group1][!UpdateMeterGroup Highlight][!UpdateMeterGroup Group1][!Redraw]
Hidden=(1-[#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]])
Group=Group1 | Group2

; ===========================================================================

[Group0_HighlightBackground]
Shape=Rectangle [#Group0_CurrentMail#:X],[#Group0_CurrentMail#:Y],[#Group0_CurrentMail#:W],[#Group0_CurrentMail#:H],(#DropdownBGCorner#/2) | Fill Color #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape2=Rectangle [#Group0_CurrentMail#:X],[#Group0_CurrentMail#:Y],[#Group0_CurrentMail#:W],[#Group0_CurrentMail#:H],(#DropdownBGCorner#/2) | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle [#Group0_CurrentMail#:X],[#Group0_CurrentMail#:Y],[#Group0_CurrentMail#:W],[#Group0_CurrentMail#:H],(#DropdownBGCorner#/2) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle [#Group0_CurrentMail#:X],[#Group0_CurrentMail#:Y],[#Group0_CurrentMail#:W],[#Group0_CurrentMail#:H],(#DropdownBGCorner#/2) | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0

[Group0_HighlightSelected]
Shape=Rectangle [#HLSelectedGroup0B[#HLSelectedShapeNum]]
Shape2=Rectangle [Group0_String_[#Multiples_Mails___Mail_Index_Number]:X],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:Y],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:W],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:H],(#DropdownBGCorner#/2) | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle [Group0_String_[#Multiples_Mails___Mail_Index_Number]:X],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:Y],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:W],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:H],(#DropdownBGCorner#/2) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle [Group0_String_[#Multiples_Mails___Mail_Index_Number]:X],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:Y],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:W],[Group0_String_[#Multiples_Mails___Mail_Index_Number]:H],(#DropdownBGCorner#/2) | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0
ShapeOption=[#HLSelectedOptionB[#HLSelectedShapeNum]]
Hidden=(#Multiples_Mails___Mail_Count#=1?1:0)

; --------------------------------------------

[Group0_String_1]
X=((8*#DroptopSize#)-(8*#DroptopSize#)%1+[#CURRENTSECTION#:W]/2+(1*#DroptopSize#)-(1*#DroptopSize#)%1)
Y=(#DropdownIconYoffset#-#DropdownIconYoffset#%1+#DropdownItemYOffset#+[#CURRENTSECTION#:H])
LeftMouseDownAction=[!Hide "#CURRENTCONFIG#\Folder"][!SetVariable Multiples_Mails___Mail_Index_Char ""][!SetVariable Multiples_Mails___Mail_Index_Number [##CURRENTSECTION#]][!SetVariable Group1_CurrentBox Group99_String_0][!SetVariable Group1_SelectedBox Group99_String_0][!UpdateMeasureGroup Group1][!UpdateMeterGroup Highlight][!UpdateMeterGroup Group1][!Redraw]

[Group0_String_2]

[Group0_String_3]

[Group0_String_4]

[Group0_String_5]

; --------------------------------------------

[Group0_Icon_1]
Y=(#DropdownIconYoffset#-#DropdownIconYoffset#%1+#DropdownItemYOffset#+(1*#DroptopSize#)-(1*#DroptopSize#)%1)

[Group0_Icon_2]

[Group0_Icon_3]

[Group0_Icon_4]

[Group0_Icon_5]

; ===========================================================================

[Group1_Mail_Account_String]
X=([#CURRENTCONFIGWIDTH]/2)
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
Y=([Background2:Y]+(#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
Text=[ReplaceUsername]
InLinePattern3="[#GmailUsername[#Multiples_Mails___Mail_Index_Char]]"
InlineSetting3=Case | Proper
Hidden=([#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]=0?(#Multiples_Mails___Mail_Count#=1?0:1):0)
Group=Group1

; --------------------------------------------

[Group1_Mail_Box_1]
X=((10*#DroptopSize#)-(10*#DroptopSize#)%1+#DropdownStrokeWidth#-#DropdownStrokeWidth#%1)
Y=(([Background2:Y]+#DropdownItemHeight#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)-#DropdownMenuCutout#)*[#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]*[#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]])

[Group1_Mail_Box_2]

[Group1_Mail_Box_3]

[Group1_Mail_Box_4]

[Group1_Mail_Box_5]

[Group1_Mail_Box_6]

[Group1_Mail_Box_7]

[Group1_Mail_Box_8]

[Group1_Mail_Box_9]

[Group1_Mail_Box_10]

[Group1_Mail_Box_11]
Shape=Rectangle 0,0,((#CURRENTCONFIGWIDTH#-((10*#DroptopSize#)-(10*#DroptopSize#)%1+#DropdownStrokeWidth#-#DropdownStrokeWidth#%1)*2)/1),(50*#DroptopSize#),(#DropdownBGCorner#/2) | Extend FillColor | StrokeWidth 0
Y=(([Group1_Mail_Box_[#Multiples_Mails___Mail_Preview_Count]:YH]+((10*#DroptopSize#)-(10*#DroptopSize#)%1))*[#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]*[#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]])
Hidden=([#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]>[#Multiples_Mails___Mail_Preview_Count]?0:1)))

; --------------------------------------------

[Group1_HighlightBackground]
Shape=Rectangle [#Group1_CurrentBox#:X],[#Group1_CurrentBox#:Y],[#Group1_CurrentBox#:W],[#Group1_CurrentBox#:H],(#DropdownBGCorner#/2) | Fill Color #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape2=Rectangle [#Group1_CurrentBox#:X],[#Group1_CurrentBox#:Y],[#Group1_CurrentBox#:W],[#Group1_CurrentBox#:H],(#DropdownBGCorner#/2) | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle [#Group1_CurrentBox#:X],[#Group1_CurrentBox#:Y],[#Group1_CurrentBox#:W],[#Group1_CurrentBox#:H],(#DropdownBGCorner#/2) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle [#Group1_CurrentBox#:X],[#Group1_CurrentBox#:Y],[#Group1_CurrentBox#:W],[#Group1_CurrentBox#:H],(#DropdownBGCorner#/2) | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0

[Group1_HighlightSelected]
Shape=Rectangle [#HLSelectedGroup1B[#HLSelectedShapeNum]]
Shape2=Rectangle [#Group1_SelectedBox#:X],[#Group1_SelectedBox#:Y],[#Group1_SelectedBox#:W],[#Group1_SelectedBox#:H],(#DropdownBGCorner#/2) | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle [#Group1_SelectedBox#:X],[#Group1_SelectedBox#:Y],[#Group1_SelectedBox#:W],[#Group1_SelectedBox#:H],(#DropdownBGCorner#/2) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle [#Group1_SelectedBox#:X],[#Group1_SelectedBox#:Y],[#Group1_SelectedBox#:W],[#Group1_SelectedBox#:H],(#DropdownBGCorner#/2) | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0
ShapeOption=[#HLSelectedOptionB[#HLSelectedShapeNum]]

; --------------------------------------------

[Group1_String_1]

[Group1_String_2]

[Group1_String_3]

[Group1_String_4]

[Group1_String_5]

[Group1_String_6]

[Group1_String_7]

[Group1_String_8]

[Group1_String_9]

[Group1_String_10]

[Group1_String_11]
MeasureName=RemainingMailCalc
Text=#MailItem10#
Hidden=([#Multiples_Mails___Gmail_Status_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Connected_[#Multiples_Mails___Mail_Index_Number]]=0?1:([#Multiples_Mails___Gmail_Num_[#Multiples_Mails___Mail_Index_Number]]>[#Multiples_Mails___Mail_Preview_Count]?0:1)))
LeftMouseDownAction=["https://gmail.google.com/gmail"]
[Variables]
Multiples_Mails___Mail_Index_Char=
Multiples_Mails___Mail_Index_Number=1
