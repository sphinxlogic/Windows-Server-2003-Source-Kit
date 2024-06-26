<% @LANGUAGE="VBScript" @EnableSessionState="False"  %>
<% 'Option Explicit

Function GetString(ByVal sStringName)
	If InStr(sStringName, "L_") <> 1 Then sStringName = "L_" & sStringName & "_Text"

	'' Texts
	Const L_StartRemoteAssistance_Text  		= "Uzaktan Yard�m� Ba�lat"
	Const L_ProductName_Text			= "Uzaktan Yard�m"
	Const L_Title1Paragraph1_Text		= "Uzaktan Yard�m kullanarak Yard�m sa�lan�yor"
	Const L_Paragraph1_Text				= "Bazen birine sorunlar�n� ��zmede yard�m etmenin en iyi yolu ��z�m� g�stermektir. Uzaktan Yard�m, arkada��n�zla bilgisayar�ndaki sorunun ��z�m�ne do�ru ilerleyebilece�iniz g�venli bir ba�lant�d�r."
	Const L_Paragraph2_Text				= "�lk defa deniyorsan�z, l�tfen a�a��daki notlar� okuyun."
	Const L_StartRAMessage_Text			= "<font color=""#000000"" size=""2"">Arkada��n�z�n bilgisayar�na ba�lanmak i�in �unu t�klat�n</font><b><font color=""#000000"" size=""2""><b> Uzaktan Yard�m� Ba�lat</b></font></b>"
	Const L_StartRAButton_Text			= "Uzaktan Yard�m� Ba�lat"
	Const L_JScriptNotAvail1_Text		= "Ge�erli Internet Explorer g�venlik ayarlar�n�z Uzaktan Yard�m� kullan�lmas�na izin vermeyecek derecede y�ksek ayarlanm��. Uzaktan Yard�m� kullanmak i�in ayarlar� de�i�tirin veya bu siteyi g�venilen site olarak ekleyin."
	Const L_IEHelp_Text					= "G�venlik ayarlar�n� de�i�tirmekle ilgili bilgi i�in, Internet Explorer Yard�m�'na bak�n."
	Const L_TicketError1_Text			= "Uzaktan Yard�m davetiyeniz yok veya ge�erli de�il. Uzaktan Yard�m'� kullanmak i�in ge�erli davetiye gereklidir."
	Const L_InstallIE_Text				= "Uzaktan Yard�m davetini kabul etmek i�in, Internet Explorer 5.5 y�klemelisiniz."
	Const L_TicketErrorMsg_Text			= "Uzaktan Yard�m hakk�nda daha fazla bilgi i�in, Windows XP'den <B>Ba�lat</B>, <B>Yard�m ve Destek</B> ��esini t�klat�p  <B>Ara</B> kutusuna <B>Uzaktan Yard�m</B> yaz�n."
	
	Const L_NotesTitle_Text				= "Notlar"
	Const L_NotesLine1_Text				= "Sadece g�vendi�iniz ki�ilerden gelen davetleri kabul edin."
	
	Const L_NotesLine2_Text				= "Uzaktan Yard�m'� kullan�rken hem siz hem de yard�m etti�iniz ki�i Internet'e ba�l� olmal�d�r. Bu daveti g�nderen ki�i onun bilgisayar�na ba�lanma iste�inizi kabul edebilecek durumdaysa, onun bilgisayar�n�n ekran�n� g�rebilir, ayn� anda sohbet edebilirsiniz."
	
	Const L_NotesLine6_Text				= "Bu g�venli bir tek y�nl� ba�lant�d�r. Bilgisayar�na ba�land���n�z ki�i hi�bir zaman kendi bilgisayar�n� sizin bilgisayar�n�za eri�mek i�in kullanamaz. Yerel a�da �al���yorsan�z, g�venlik duvarlar� Uzaktan Yard�m'� kullanman�za engel olabilir. Bu durumda ek bilgi i�in a� y�neticinizle temasa ge�in."
	
	Const L_LearnXP_Text				= "Uzaktan Yard�m hakk�nda daha fazla bilgi i�in Windows XP'den <b>Ba�lat</b>, <b>Yard�m ve Destek</b> ��esini t�klat�p <b>Ara</b> kutusuna <b>Uzaktan Yard�m</b> yaz�n."
	
	Const L_ContactUsMsg_Text			= "Bize ula��n"
	

	Const L_XPNewsletterMsg_Text		= "�cretsiz B�lten"
	Const L_EmailPage_Text				= "Bu sayfay� E-postayla g�nder"
	
	Const L_CopyRightMsg_Text			= "(C) 2001 Microsoft Corporation. T�m haklar� sakl�d�r. Kullan�m Ko�ullar�."
	
	Const L_PrivacyMsg_Text				= "Gizlilik Bildirimi"

	Const L_AccMsg_Text					= "Eri�ilebilirlik"

	Const L_NotIEError1_Text			= "Uzaktan Yard�m daveti kabul etmek i�in Internet Explorer 5.5 ya da yenisini y�klemelisiniz."

	Const L_NotXPError1_Text			= "Microsoft Uzaktan Yard�m, Windows&nbsp;XP'nin bir �zelli�idir. Uzaktan Yard�m kullanmak i�in �nce Windows&nbsp;XP y�klemelisiniz."

	Const L_IELinkMsg_Text				= "Internet Explorer'�n en son s�r�m�n� kar��dan y�kleyin"
	Const L_XPLinkMsg_Text				= "Windows XP hakk�nda ek bilgi i�in "
	Const L_XPLinkMsg2_Text				= "Microsoft Windows Web sitesini ziyaret edin"
	Const L_XPLinkMsg3_Text				= "."
	
	Const L_IntroMsg1_Text              = "Uzaktan Yard�m'� kullanmak i�in bir bile�en indirilmesi gerekiyor. 28.8 kbps modeminiz varsa, indirme 1 dakika s�rer."
    Const L_IntroMsg2_Text              = "Uzaktan Yard�m'� �al��t�rmak i�in Active Komut Dizileri etkin olmal�d�r. Beklenen indirme s�resinden sonra bu sayfa indirmenin tamamland���n� onaylamazsa, komut dizilerinin etkin olmas�n� sa�lay�n."
    Const L_IntroMsg3_Text              = "Active Komut Dizileri'ni etkinle�tirmek i�in a�a��dakileri uygulay�n:"
    Const L_IntroMsg4_Text              = "Internet Explorer'da <B>Ara�lar</B> men�s�nde <B>Internet Se�enekleri</B>'ni t�klat�n."
    Const L_IntroMsg5_Text              = "<B>G�venlik </B>sekmesini t�klat�n."
    Const L_IntroMsg6_Text              = "<STRONG>Internet</STRONG>simgesini t�klat�p <STRONG>�zel D�zey</STRONG>'i t�klat�n."
    Const L_IntroMsg7_Text              = "Komut Dizi b�l�m�nde, <STRONG>Active Komut Dizileri</STRONG> alt�nda <STRONG>Etkinle�tir</STRONG>'i t�klat�n."
    
	' **************************************
	' Links - No need for localization
	' **************************************
	Const L_AccLink_Text				= "http://www.microsoft.com/enable/"		
	Const L_XPLink_Text					= "http://www.microsoft.com/windowsxp/default.asp"
	Const L_PrivacyLink_Text			= "http://www.microsoft.com/info/privacy.htm"
	Const L_ContactUsLink_Text			= "http://register.microsoft.com/contactus30/contactus.asp?domain=windows&amp;lcid=1033&amp;cu=http://register.microsoft.com/contactus30/contactus.asp?domain=windows"
	Const L_MailTo1_Text				= "mailto:?subject=Microsoft'tan bir ba�lant�&body=Bu ba�lant�, Microsoft Windows XP Web sitesinden"
	Const L_CopyRightLink_Text			= "http://www.microsoft.com/info/cpyright.htm"
	Const L_XPNewsletterLink_Text		= "http://www.microsoft.com/windowsxp/newsletters.asp"
	Const L_LinkToIE_Text				= "http://www.microsoft.com/windows/ie/default.htm"
	'*************************************	
	
	GetString = Eval(sStringName)
End Function

%>