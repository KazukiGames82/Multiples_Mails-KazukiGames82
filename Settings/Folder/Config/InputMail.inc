[Variables]

Input1=[#*[#*InputName1*]*]
Input2=[#*[#*InputName2*]*]

DropdownItemPadding1=#DropdownNoIconPadding#

[HotInput]
Measure=Plugin
Plugin=HotInput
UseLuaEscape=1
InputAction=[!CommandMeasure InputHandler """HandleInput('$input$')"""]
NavigateAction=[!CommandMeasure InputHandler """HandleNavigation('$navigation$')"""]

[InputHandler]
Measure=Script
ScriptFile=#SKINSPATH#Droptop\@Resources\Scripts\Lua\InputHandler.lua
Multiline=0
MainMeterName=1
TargetVariableName=#InputName1#
ContainingFilePath="#InputLoc1#"
CaretMeterName=MICaret
FakeMeterName=MIFake
CaretCharacter=|
UpdateGroup=Items
UpdateDivider=-1
OnFinishAction=[!UpdateMeasure CheckUsernameChange][!UpdateMeasure Multiples_Mails___Measure_Mail_#IndexMail# "Droptop\Other\BackgroundProcesses"][!CommandMeasure Multiples_Mails___Measure_Mail_#IndexMail# "Update" "Droptop\Other\BackgroundProcesses"]
DynamicVariables=1

[CheckUsernameChange]
Measure=String
String=[#GmailUsername[#IndexMail]]
RegExpSubstitute=1
Substitute="(?is)\@gmail.com":"","(?is)\@google.com":"","(?is)\@googlemail.com":""
UpdateDivider=-1
OnUpdateAction=[!Delay 500][!WriteKeyValue Variables GmailUsername#IndexMail# "[#CURRENTSECTION#]" "#MyVariablesLoc#"][!SetVariable GmailUsername#IndexMail# [CheckUsernameChange] "Droptop\Other\BackgroundProcesses"][!SetVariable GmailUsername#IndexMail# [CheckUsernameChange] "#MultiplesMailsUpdateSettingsLoc#"][!Update "#MultiplesMailsUpdateSettingsLoc#"]
DynamicVariables=1
Group=Username

[SendClipboard]
Measure=Calc
IfCondition=1=1
IfTrueAction=["#SKINSPATH#Droptop\@Resources\Scripts\DroptopAHK.#AHKType#" "SendClipboard"]
IfConditionMode=1
UpdateDivider=-1
Disabled=1

[InputBox1]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),(#DropdownItemHeight#-(5*#DroptopSize#)),(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),(5*#DroptopSize#),0 | StrokeWidth 0 | Fill Color 255,55,55
Shape3=Combine Shape | Union Shape2
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#)
Group=InputBox
Hidden=0
DynamicVariables=1

[InputBox2]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,(6*#DroptopSize#) | StrokeWidth 0.5 | Extend FillColor
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),(5*#DroptopSize#),0 | StrokeWidth 0 | Fill Color 255,55,55
Shape3=Combine Shape | Union Shape2
FillColor=Fill Color 255,255,255,205 | Stroke Color 0,0,0,55
X=1
Y=((#DropdownIconYoffset#)-((#DropdownIconYoffset#)%1)+#DropdownItemYOffset#+#DropdownItemHeight#)
Group=InputBox
Hidden=0
DynamicVariables=1

[InputStyle]
InlineSetting2=
FontColor=0,0,0,255
TrailingSpaces=1
LeftMouseDownAction=[!UpdateMeterGroup InputBox][!Redraw][!SetOption MICaret Y ([#CURRENTSECTION#:Y]+(#DropdownItemHeight#/2))][!SetOption #CURRENTSECTION# Text "[#Input[#CURRENTSECTION]]"][!SetOption InputHandler MainMeterName "#CURRENTSECTION#"][!SetOption InputHandler TargetVariableName "[#InputName[#CURRENTSECTION]]"][!SetOption InputHandler ContainingFilePath "[#InputLoc[#CURRENTSECTION]]"][!UpdateMeasure InputHandler][!CommandMeasure InputHandler Initiate()][!DisableMouseAction #CURRENTSECTION# "MouseLeaveAction"][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption InputBox#CURRENTSECTION# FillColor "255,255,255,255 | Stroke Color 0,0,0,255"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseOverAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,255 | Stroke Color 0,0,0,155"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption InputBox#CURRENTSECTION# FillColor "Fill Color 255,255,255,205 | Stroke Color 0,0,0,55"][!UpdateMeter InputBox#CURRENTSECTION#][!Redraw]

[MICaret]
Meter=String
MeterStyle=InfoStyle
StringAlign=LeftCenter
FontColor=0,0,0,0
InlinePattern2=\|$
InlineSetting2=Color | 0,0,0,255
InlinePattern3=\|$
InlineSetting3=CharacterSpacing | -1.5
InlinePattern4=\|$
InlineSetting4=Weight | 200
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=1
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)
