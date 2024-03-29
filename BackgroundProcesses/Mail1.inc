[Multiples_Mails___Measure_Mail_1]
Measure=WebParser
Url=https://#GmailUsername#:#GmailPassword#@gmail.google.com/gmail/feed/atom
RegExp="(?siU)<fullcount>(.*)<\/fullcount>(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)"
UpdateRate=30
Substitute="":""
OnConnectErrorAction=[#Multiples_Mails___ConnectError_1_[#Multiples_Mails___Settings_Loaded]]
OnRegExpErrorAction=[#Multiples_Mails___RegExpError_1_[#Multiples_Mails___Settings_Loaded]]
FinishAction=[#Multiples_Mails___Finish_1_[#Multiples_Mails___Settings_Loaded]]
LogSubstringErrors=0
DynamicVariables=1
Disabled=1

[Multiples_Mails___Measure_Count_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=1
IfCondition=[Multiples_Mails___Measure_Count_1]>#Multiples_Mails___Gmail_Num_1#
IfTrueAction=[#Multiples_Mails___Count_TrueAction_1_[#Multiples_Mails___CustomApp_Loaded]]
OnChangeAction=[#Multiples_Mails___Count_ChangeAction_1_[#Multiples_Mails___CustomApp_Loaded]]
DynamicVariables=1
Substitute="":"#Multiples_Mails___Gmail_Num_1#"

[Multiples_Mails___Substitute_Measure_Count_1]
Measure=String
String=#Multiples_Mails___Gmail_Num_1#
RegExpSubstitute=1
Substitute="(\d)(?=(\d{3})+(?!\d))":"\1,","":"#Multiples_Mails___Gmail_Num_1#"
OnUpdateAction=[#Multiples_Mails___Commas_Action_1_[#Multiples_Mails___CustomApp_Loaded]][!SetOption #CURRENTSECTION# OnUpdateAction ""]
OnChangeAction=[#Multiples_Mails___Commas_Action_1_[#Multiples_Mails___CustomApp_Loaded]]
DynamicVariables=1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=2
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=3
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=4
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=5
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=6
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=7
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=8
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=9
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4 | Multiples_Mails___Group_1_2
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=10
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=11
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=12
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=13
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=14
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=15
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=16
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=17
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6 | Multiples_Mails___Group_1_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=18
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=19
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=20
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=21
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=22
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=23
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=24
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=25
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8 | Multiples_Mails___Group_1_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=26
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=27
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=28
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=29
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=30
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=31
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=32
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=33
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10 | Multiples_Mails___Group_1_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=34
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=35
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=36
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=37
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_1_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=38
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_1_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=39
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_1_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=40
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_1_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_1]
StringIndex=41
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_1_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------
