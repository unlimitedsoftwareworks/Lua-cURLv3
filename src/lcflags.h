/* Bitmasks for CURLOPT_HTTPAUTH and CURLOPT_PROXYAUTH options */
FLG_ENTRY(AUTH_NONE                       )
FLG_ENTRY(AUTH_BASIC                      )
FLG_ENTRY(AUTH_DIGEST                     )
FLG_ENTRY(AUTH_GSSNEGOTIATE               )
FLG_ENTRY(AUTH_NTLM                       )
#if LCURL_CURL_VER_GE(7,19,3)
FLG_ENTRY(AUTH_DIGEST_IE                  )
#endif
#if LCURL_CURL_VER_GE(7,22,0)
FLG_ENTRY(AUTH_NTLM_WB                    )
#endif
#if LCURL_CURL_VER_GE(7,21,3)
FLG_ENTRY(AUTH_ONLY                       )
#endif
FLG_ENTRY(AUTH_ANY                        )
FLG_ENTRY(AUTH_ANYSAFE                    )

#ifdef CURLSSH_AUTH_ANY
FLG_ENTRY(SSH_AUTH_ANY                    )
#endif
#ifdef CURLSSH_AUTH_NONE
FLG_ENTRY(SSH_AUTH_NONE                   )
#endif
#ifdef CURLSSH_AUTH_PUBLICKEY
FLG_ENTRY(SSH_AUTH_PUBLICKEY              )
#endif
#ifdef CURLSSH_AUTH_PASSWORD
FLG_ENTRY(SSH_AUTH_PASSWORD               )
#endif
#ifdef CURLSSH_AUTH_HOST
FLG_ENTRY(SSH_AUTH_HOST                   )
#endif
#ifdef CURLSSH_AUTH_KEYBOARD
FLG_ENTRY(SSH_AUTH_KEYBOARD               )
#endif
#ifdef CURLSSH_AUTH_AGENT
FLG_ENTRY(SSH_AUTH_AGENT                  )
#endif
#ifdef CURLSSH_AUTH_DEFAULT
FLG_ENTRY(SSH_AUTH_DEFAULT                )
#endif


FLG_ENTRY(GSSAPI_DELEGATION_NONE          )
FLG_ENTRY(GSSAPI_DELEGATION_POLICY_FLAG   )
FLG_ENTRY(GSSAPI_DELEGATION_FLAG          )

/* Bitmasks for CURLOPT_HTTPAUTH and CURLOPT_PROXYAUTH options */
FLG_ENTRY(USESSL_NONE                     )
FLG_ENTRY(USESSL_TRY                      )
FLG_ENTRY(USESSL_CONTROL                  )
FLG_ENTRY(USESSL_ALL                      )
#ifdef CURLSSLOPT_ALLOW_BEAST
FLG_ENTRY(SSLOPT_ALLOW_BEAST              )
#endif

/* parameter for the CURLOPT_FTP_SSL_CCC option */
FLG_ENTRY(FTPSSL_CCC_NONE                 )
FLG_ENTRY(FTPSSL_CCC_PASSIVE              )
FLG_ENTRY(FTPSSL_CCC_ACTIVE               )

/* parameter for the CURLOPT_FTPSSLAUTH option */
FLG_ENTRY(FTPAUTH_DEFAULT                 )
FLG_ENTRY(FTPAUTH_SSL                     )
FLG_ENTRY(FTPAUTH_TLS                     )

/* parameter for the CURLOPT_FTP_CREATE_MISSING_DIRS option */
FLG_ENTRY(FTP_CREATE_DIR_NONE             )
FLG_ENTRY(FTP_CREATE_DIR                  )
FLG_ENTRY(FTP_CREATE_DIR_RETRY            )
FLG_ENTRY(FTP_CREATE_DIR_LAST             )

/* parameter for the CURLOPT_FTP_FILEMETHOD option */
FLG_ENTRY(FTPMETHOD_DEFAULT               )
FLG_ENTRY(FTPMETHOD_MULTICWD              )
FLG_ENTRY(FTPMETHOD_NOCWD                 )
FLG_ENTRY(FTPMETHOD_SINGLECWD             )

/* bitmask defines for CURLOPT_HEADEROPT */
#if LCURL_CURL_VER_GE(7,37,0)
FLG_ENTRY(HEADER_UNIFIED                  )
FLG_ENTRY(HEADER_SEPARATE                 )
#endif

/* CURLPROTO_ defines are for the CURLOPT_*PROTOCOLS options */
FLG_ENTRY(PROTO_HTTP                      )
FLG_ENTRY(PROTO_HTTPS                     )
FLG_ENTRY(PROTO_FTP                       )
FLG_ENTRY(PROTO_FTPS                      )
FLG_ENTRY(PROTO_SCP                       )
FLG_ENTRY(PROTO_SFTP                      )
FLG_ENTRY(PROTO_TELNET                    )
FLG_ENTRY(PROTO_LDAP                      )
FLG_ENTRY(PROTO_LDAPS                     )
FLG_ENTRY(PROTO_DICT                      )
FLG_ENTRY(PROTO_FILE                      )
FLG_ENTRY(PROTO_TFTP                      )
FLG_ENTRY(PROTO_IMAP                      )
FLG_ENTRY(PROTO_IMAPS                     )
FLG_ENTRY(PROTO_POP3                      )
FLG_ENTRY(PROTO_POP3S                     )
FLG_ENTRY(PROTO_SMTP                      )
FLG_ENTRY(PROTO_SMTPS                     )
FLG_ENTRY(PROTO_RTSP                      )
FLG_ENTRY(PROTO_RTMP                      )
FLG_ENTRY(PROTO_RTMPT                     )
FLG_ENTRY(PROTO_RTMPE                     )
FLG_ENTRY(PROTO_RTMPTE                    )
FLG_ENTRY(PROTO_RTMPS                     )
FLG_ENTRY(PROTO_RTMPTS                    )
FLG_ENTRY(PROTO_GOPHER                    )
FLG_ENTRY(PROTO_ALL                       )