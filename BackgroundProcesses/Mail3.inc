[Multiples_Mails___Measure_Mail_3]
Measure=WebParser
Url=https://#GmailUsername3#:#GmailPassword3#@gmail.google.com/gmail/feed/atom
RegExp="(?siU)<fullcount>(.*)<\/fullcount>(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)(?(?=.*<entry>).*<title.*>(.*)</title>.*<summary>(.*)</summary>.*<link.*href="(.*)".*<name>(.*)</name>)"
UpdateRate=30
Substitute="":""
OnConnectErrorAction=[#Multiples_Mails___ConnectError_3_[#Multiples_Mails___Settings_Loaded]]
OnRegExpErrorAction=[#Multiples_Mails___RegExpError_3_[#Multiples_Mails___Settings_Loaded]]
FinishAction=[#Multiples_Mails___Finish_3_[#Multiples_Mails___Settings_Loaded]]
LogSubstringErrors=0
DynamicVariables=1
Disabled=1

[Multiples_Mails___Measure_Count_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=1
IfCondition=[Multiples_Mails___Measure_Count_3]>#Multiples_Mails___Gmail_Num_3#
IfTrueAction=[#Multiples_Mails___Count_TrueAction_3_[#Multiples_Mails___CustomApp_Loaded]]
OnChangeAction=[#Multiples_Mails___Count_ChangeAction_3_[#Multiples_Mails___CustomApp_Loaded]]
DynamicVariables=1
Substitute="":"#Multiples_Mails___Gmail_Num_3#"

[Multiples_Mails___Substitute_Measure_Count_3]
Measure=String
String=#Multiples_Mails___Gmail_Num_3#
RegExpSubstitute=1
Substitute="(\d)(?=(\d{3})+(?!\d))":"\1,","":"#Multiples_Mails___Gmail_Num_3#"
OnUpdateAction=[#Multiples_Mails___Commas_Action_3_[#Multiples_Mails___CustomApp_Loaded]][!SetOption #CURRENTSECTION# OnUpdateAction ""]
OnChangeAction=[#Multiples_Mails___Commas_Action_3_[#Multiples_Mails___CustomApp_Loaded]]
DynamicVariables=1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=2
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=3
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=4
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_1]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=5
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=6
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=7
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=8
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_2]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=9
DecodeCharacterReference=1
RegExpSubstitute=1
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4 | Multiples_Mails___Group_3_2
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=10
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=11
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=12
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_3]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=13
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=3?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=14
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=15
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=16
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_4]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=17
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6 | Multiples_Mails___Group_3_4
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=4?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=18
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=19
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=20
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_5]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=21
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=5?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=22
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=23
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=24
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_6]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=25
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8 | Multiples_Mails___Group_3_6
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=6?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=26
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=27
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=28
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_7]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=29
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=7?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=30
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=31
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=32
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_8]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=33
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10 | Multiples_Mails___Group_3_8
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=8?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=34
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=35
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=36
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_9]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=37
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=9?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------

[Multiples_Mails___Measure_Title_3_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=38
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"...","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Summary_3_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=39
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Link_3_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=40
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

[Multiples_Mails___Measure_Author_3_10]
Measure=WebParser
Url=[Multiples_Mails___Measure_Mail_3]
StringIndex=41
DecodeCharacterReference=1
RegExpSubstitute=1
Substitute="":"","#CRLF#":"","\x{200C}|\x{034F}|\x{0022}|\x{0027}":""
Group=Multiples_Mails___Group_3_10
Disabled=(#Multiples_Mails___Mail_Preview_Count#>=10?0:1)
DynamicVariables=1
UpdateDivider=-1

; -----------------------------------------
