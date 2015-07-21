#if defined _teftp_included_
	#endinput
#endif
#define _teftp_included_


functag EasyFTP_FileUploaded public(const String:sTarget[], const String:sLocalFile[], const String:sRemoteFile[], iErrorCode, any:data);
native void EasyFTP_UploadFile(const char[] sTarget, const char[] sLocalFile, const char[] sRemoteFile, EasyFTP_FileUploaded func, any data = 0);