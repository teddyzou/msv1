// this is disassemblly of msv1_0.LsaApLogonUserEx2
__int64 __fastcall LsaApLogonUserEx2(
        __int64 a1,
        _SECURITY_LOGON_TYPE a2,
        struct _MSV1_0_INTERACTIVE_LOGON *proto_buf_base,
        unsigned __int64 client_buf_base,
        unsigned int submit_buf_len,
        _QWORD *a6,
        __int64 a7,
        LUID *a8,
        _DWORD *a9,
        int *a10,
        __int64 a11,
        __int64 *a12,
        __int64 *a13,
        PUNICODE_STRING *a14,
        struct _SECPKG_PRIMARY_CRED *a15,
        unsigned __int8 **a16)
{
  struct _MSV1_0_PRIMARY_CREDENTIAL *v16; // r14
  LUID *v17; // rbx
  struct _SECPKG_PRIMARY_CRED *v19; // r15
  __int64 v21; // r12
  char v22; // di
  __int64 v23; // r8
  int v24; // r10d
  char v25; // r14
  struct _NETLOGON_LOGON_IDENTITY_INFO *v26; // r9
  __int64 v27; // rdx
  struct _MSV1_0_INTERACTIVE_LOGON *v28; // rbx
  unsigned int v29; // r15d
  MSV1_0_LOGON_SUBMIT_TYPE MessageType; // eax
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  MSV1_0_LOGON_SUBMIT_TYPE v34; // edi
  unsigned __int64 v35; // rcx
  unsigned __int16 v36; // dx
  bool v37; // zf
  unsigned __int64 name_buf_org; // rcx
  unsigned __int16 name_len; // dx
  bool name_len_valid; // zf
  unsigned __int64 buf_org; // rdx
  __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  UNICODE_STRING *v44; // r14
  unsigned __int16 v45; // dx
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  struct _UNICODE_STRING *v48; // rax
  unsigned int v49; // ebx
  unsigned int v50; // eax
  UNICODE_STRING *v51; // r12
  char v52; // di
  int v53; // ecx
  int v54; // eax
  UNICODE_STRING v55; // xmm0
  int v56; // eax
  int v57; // r12d
  bool v58; // r13
  struct _SECPKG_PRIMARY_CRED *v59; // r14
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  unsigned __int16 v62; // dx
  char *v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rdx
  struct _UNICODE_STRING *v67; // rax
  struct _UNICODE_STRING v68; // xmm0
  int v69; // eax
  unsigned __int16 *p_Length; // r14
  unsigned __int16 Length; // di
  __int16 v72; // di
  UNICODE_STRING *p_UserName; // r13
  unsigned __int16 v74; // dx
  unsigned __int64 Buffer; // rcx
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // rcx
  bool v78; // zf
  const WCHAR *v79; // rdi
  size_t v80; // r8
  wchar_t *v81; // rdx
  UNICODE_STRING v82; // xmm0
  unsigned __int64 v83; // rcx
  UNICODE_STRING *p_LogonDomainName; // r12
  __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  __int64 v87; // rdi
  int v88; // eax
  UNICODE_STRING v89; // xmm1
  unsigned __int16 v90; // ax
  wchar_t *v91; // rax
  unsigned __int8 v92; // si
  int v93; // eax
  struct _MSV1_0_PRIMARY_CREDENTIAL *v94; // r13
  PUNICODE_STRING v95; // rdx
  char v96; // al
  int GMSAPwdHash; // eax
  _UNKNOWN **v98; // rdx
  int TbalCredentials; // eax
  int v100; // edi
  struct _UNICODE_STRING *p_DomainName1; // rax
  UNICODE_STRING v102; // xmm0
  UNICODE_STRING v103; // xmm1
  LUID v104; // rax
  HLOCAL v105; // rcx
  int v106; // ebx
  wchar_t *v107; // r14
  _DWORD *v108; // rax
  int v109; // edi
  _QWORD *v110; // rcx
  __int64 v111; // rdx
  _DWORD *v112; // rax
  int v113; // edi
  char v114; // di
  void *v115; // rdi
  int v116; // edi
  int v117; // r8d
  int v118; // ecx
  int v119; // eax
  int v120; // r12d
  int v121; // eax
  bool v122; // zf
  __int64 v123; // r8
  int v124; // eax
  char v125; // al
  unsigned __int16 v126; // ax
  int v127; // edi
  _QWORD *v128; // rcx
  __int64 v129; // rdx
  NTSTATUS v130; // eax
  int PrimaryCredentialByUserSid; // eax
  struct _UNICODE_STRING *v132; // rcx
  __int64 v133; // r10
  struct _NETLOGON_INTERACTIVE_INFO *v134; // r8
  __int64 (__fastcall *v135)(__int64, char *, struct _NETLOGON_INTERACTIVE_INFO *); // rdi
  PSID v136; // rdi
  char *v137; // rdx
  struct _UNICODE_STRING *v138; // rdi
  _DWORD *v139; // rdi
  int v140; // eax
  unsigned int v141; // ecx
  __int64 v142; // rax
  _DWORD *v143; // rdi
  __int64 v144; // rdx
  unsigned int v145; // eax
  _DWORD *v146; // rcx
  int v147; // edi
  int v148; // eax
  int v149; // ecx
  int v150; // r8d
  int v151; // ecx
  int v152; // ecx
  PSID v153; // rdi
  UNICODE_STRING *v154; // r14
  struct _UNICODE_STRING *v155; // r15
  void *v156; // r12
  struct _SECPKG_PRIMARY_CRED *v157; // r13
  __int64 v158; // rcx
  char *v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rax
  char *v163; // r8
  __int64 v164; // rax
  char *v165; // rbx
  int v166; // eax
  char *v167; // r11
  char *v168; // r10
  char *v169; // rdi
  char *v170; // rdx
  int CredEncryptionTypeForUser; // eax
  unsigned __int16 v172; // cx
  wchar_t *v173; // rax
  unsigned __int16 v174; // cx
  wchar_t *v175; // rax
  int v176; // r14d
  unsigned __int16 v177; // di
  wchar_t *v178; // rax
  char v179; // r13
  int v180; // eax
  ULONG v181; // eax
  __int64 v182; // rbx
  unsigned int v183; // edi
  unsigned int v184; // edi
  __int64 v185; // rax
  void *v186; // rdi
  int v187; // eax
  unsigned int v188; // ebx
  void *v189; // rdx
  void *v190; // rdi
  struct _RTL_BALANCED_NODE *v191; // rdx
  __int64 v192; // r8
  struct _RTL_BALANCED_NODE *v193; // rax
  __int64 v194; // rax
  unsigned __int16 active; // ax
  _QWORD *v196; // rcx
  __int64 v197; // rdx
  int v198; // r9d
  __int64 v199; // rcx
  char *v200; // rax
  unsigned int v201; // ebx
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rdx
  unsigned __int16 v205; // di
  wchar_t *v206; // rax
  unsigned int v207; // edi
  wchar_t *v208; // rax
  unsigned __int16 v209; // di
  wchar_t *v210; // rax
  PSID v211; // rdi
  int v212; // edi
  _QWORD *v213; // r14
  int v214; // eax
  __int64 v215; // rax
  _QWORD *v216; // rcx
  int CredentialKey; // eax
  int SupplementalTbalCredentials; // eax
  int v219; // ebx
  int v220; // r9d
  unsigned __int16 v221; // ax
  int v222; // eax
  char v223; // r9
  __int128 v224; // xmm1
  __int64 v225; // rdx
  unsigned __int8 **v226; // rcx
  unsigned __int8 *v227; // rax
  _QWORD *v228; // rdi
  wchar_t *v229; // rcx
  __int64 v230; // rax
  PUNICODE_STRING *v231; // r15
  struct _UNICODE_STRING *v232; // rcx
  int v233; // eax
  __int64 v234; // rax
  PUNICODE_STRING *v235; // r12
  struct _UNICODE_STRING *v236; // rcx
  __int64 v237; // rcx
  PUNICODE_STRING *v238; // rsi
  PCUNICODE_STRING v239; // rbx
  __int64 v240; // rax
  struct _UNICODE_STRING *v241; // rcx
  unsigned __int8 *v242; // rdx
  PUNICODE_STRING v243; // rcx
  __m128i v244; // xmm1
  __int64 v245; // rdx
  WCHAR *v246; // rdx
  char *v248; // [rsp+50h] [rbp-B0h]
  char v249; // [rsp+80h] [rbp-80h]
  NTSTATUS NetworkProfile; // [rsp+84h] [rbp-7Ch] BYREF
  struct _UNICODE_STRING *v251; // [rsp+88h] [rbp-78h]
  struct _MSV1_0_PRIMARY_CREDENTIAL *v252; // [rsp+90h] [rbp-70h] BYREF
  LUID *LocallyUniqueId; // [rsp+98h] [rbp-68h]
  char v254; // [rsp+A0h] [rbp-60h]
  struct _SECPKG_PRIMARY_CRED *v255; // [rsp+A8h] [rbp-58h]
  __int64 v256; // [rsp+B0h] [rbp-50h]
  char v257; // [rsp+B8h] [rbp-48h]
  _SECURITY_LOGON_TYPE v258; // [rsp+C0h] [rbp-40h] BYREF
  char v259; // [rsp+C8h] [rbp-38h]
  bool v260; // [rsp+C9h] [rbp-37h]
  char v261; // [rsp+CAh] [rbp-36h]
  HLOCAL hMem; // [rsp+D0h] [rbp-30h] BYREF
  int v263; // [rsp+D8h] [rbp-28h]
  PUNICODE_STRING v264; // [rsp+E0h] [rbp-20h]
  unsigned __int8 v265; // [rsp+E8h] [rbp-18h] BYREF
  char v266; // [rsp+E9h] [rbp-17h]
  char v267; // [rsp+EAh] [rbp-16h] BYREF
  char v268; // [rsp+EBh] [rbp-15h]
  char v269; // [rsp+ECh] [rbp-14h]
  char v270; // [rsp+EDh] [rbp-13h]
  char v271; // [rsp+EEh] [rbp-12h]
  char v272; // [rsp+EFh] [rbp-11h]
  int v273; // [rsp+F0h] [rbp-10h]
  int v274; // [rsp+F4h] [rbp-Ch]
  int v275; // [rsp+F8h] [rbp-8h]
  unsigned int v276; // [rsp+FCh] [rbp-4h]
  unsigned int v277; // [rsp+104h] [rbp+4h] BYREF
  int v278; // [rsp+108h] [rbp+8h]
  struct _UNICODE_STRING DomainName1; // [rsp+110h] [rbp+10h] BYREF
  int v280; // [rsp+120h] [rbp+20h] BYREF
  int v281; // [rsp+124h] [rbp+24h]
  PSID Sid; // [rsp+128h] [rbp+28h]
  size_t Size; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v284; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v285; // [rsp+13Ch] [rbp+3Ch]
  __int64 v286; // [rsp+140h] [rbp+40h]
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp+50h] BYREF
  void *Src[2]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD *v289; // [rsp+170h] [rbp+70h]
  struct _MSV1_0_PRIMARY_CREDENTIAL *v290; // [rsp+178h] [rbp+78h] BYREF
  struct _MSV1_0_INTERACTIVE_LOGON *v291; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v292; // [rsp+188h] [rbp+88h] BYREF
  __int64 v293; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v294; // [rsp+198h] [rbp+98h]
  unsigned int v295; // [rsp+19Ch] [rbp+9Ch] BYREF
  void *v296; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD *v297; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *v298; // [rsp+1B0h] [rbp+B0h] BYREF
  HLOCAL v299; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _UNICODE_STRING String; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v301; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v302; // [rsp+1D8h] [rbp+D8h]
  UNICODE_STRING v303; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v304; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v305; // [rsp+1F8h] [rbp+F8h]
  char *v306; // [rsp+200h] [rbp+100h]
  PCUNICODE_STRING SourceString; // [rsp+208h] [rbp+108h]
  __int64 *v308; // [rsp+210h] [rbp+110h]
  __int64 *v309; // [rsp+218h] [rbp+118h]
  UNICODE_STRING v310; // [rsp+220h] [rbp+120h] BYREF
  UNICODE_STRING v311; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int8 **v312; // [rsp+240h] [rbp+140h]
  __int64 v313; // [rsp+248h] [rbp+148h] BYREF
  __int64 v314; // [rsp+250h] [rbp+150h]
  __int128 v315; // [rsp+258h] [rbp+158h]
  unsigned __int64 v316; // [rsp+268h] [rbp+168h] BYREF
  WCHAR *v317; // [rsp+270h] [rbp+170h]
  __int64 v318; // [rsp+278h] [rbp+178h]
  struct _UNICODE_STRING DomainName2; // [rsp+280h] [rbp+180h] BYREF
  struct _UNICODE_STRING v320; // [rsp+290h] [rbp+190h] BYREF
  struct _UNICODE_STRING v321; // [rsp+2A0h] [rbp+1A0h] BYREF
  UNICODE_STRING String2; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v323[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  PUNICODE_STRING *v324; // [rsp+2D0h] [rbp+1D0h]
  UNICODE_STRING v325; // [rsp+2D8h] [rbp+1D8h]
  __m128i v326; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v327; // [rsp+2F8h] [rbp+1F8h]
  __int64 v328; // [rsp+300h] [rbp+200h] BYREF
  __int64 v329; // [rsp+308h] [rbp+208h]
  __int64 v330; // [rsp+310h] [rbp+210h]
  int v331; // [rsp+318h] [rbp+218h] BYREF
  const WCHAR *v332; // [rsp+320h] [rbp+220h]
  _WORD v333[8]; // [rsp+328h] [rbp+228h] BYREF
  _WORD v334[8]; // [rsp+338h] [rbp+238h] BYREF
  _WORD v335[8]; // [rsp+348h] [rbp+248h] BYREF
  _WORD v336[8]; // [rsp+358h] [rbp+258h] BYREF
  unsigned __int16 v337; // [rsp+368h] [rbp+268h] BYREF
  void *v338; // [rsp+370h] [rbp+270h]
  UNICODE_STRING String1; // [rsp+378h] [rbp+278h] BYREF
  char v340[8]; // [rsp+388h] [rbp+288h] BYREF
  int v341; // [rsp+390h] [rbp+290h]
  char v342[8]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v343; // [rsp+3A8h] [rbp+2A8h]
  char v344[8]; // [rsp+3B8h] [rbp+2B8h] BYREF
  int v345; // [rsp+3C0h] [rbp+2C0h]
  char v346[8]; // [rsp+3D0h] [rbp+2D0h] BYREF
  int v347; // [rsp+3D8h] [rbp+2D8h]
  char v348[8]; // [rsp+3E8h] [rbp+2E8h] BYREF
  int v349; // [rsp+3F0h] [rbp+2F0h]
  char v350[8]; // [rsp+400h] [rbp+300h] BYREF
  int v351; // [rsp+408h] [rbp+308h]
  _BYTE v352[40]; // [rsp+418h] [rbp+318h] BYREF
  struct _UNICODE_STRING v353; // [rsp+440h] [rbp+340h] BYREF
  int v354; // [rsp+450h] [rbp+350h]
  UNICODE_STRING LogonDomainName; // [rsp+460h] [rbp+360h] BYREF
  UNICODE_STRING Password; // [rsp+470h] [rbp+370h]
  __int64 v357; // [rsp+480h] [rbp+380h] BYREF
  UNICODE_STRING v358; // [rsp+488h] [rbp+388h]
  UNICODE_STRING UserName; // [rsp+498h] [rbp+398h]
  _QWORD RandomBuffer[3]; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int128 v361; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int64 v362; // [rsp+4D8h] [rbp+3D8h]
  __int128 v363; // [rsp+4E0h] [rbp+3E0h]
  int v364; // [rsp+4F0h] [rbp+3F0h]
  _BYTE v365[16]; // [rsp+4F8h] [rbp+3F8h] BYREF
  _QWORD v366[3]; // [rsp+508h] [rbp+408h] BYREF
  struct _NETLOGON_INTERACTIVE_INFO v367; // [rsp+520h] [rbp+420h] BYREF
  _BYTE v368[16]; // [rsp+580h] [rbp+480h] BYREF
  _BYTE v369[16]; // [rsp+590h] [rbp+490h] BYREF
  _WORD v370[2]; // [rsp+5A0h] [rbp+4A0h] BYREF
  char v371; // [rsp+5A4h] [rbp+4A4h]
  __int128 v372; // [rsp+5B8h] [rbp+4B8h]
  int v373; // [rsp+5CCh] [rbp+4CCh]
  NTSTATUS *p_NetworkProfile; // [rsp+5D0h] [rbp+4D0h]
  int v375; // [rsp+5D8h] [rbp+4D8h]
  _SECURITY_LOGON_TYPE *v376; // [rsp+5E0h] [rbp+4E0h]
  int v377; // [rsp+5E8h] [rbp+4E8h]
  PUNICODE_STRING v378; // [rsp+5F0h] [rbp+4F0h]
  int v379; // [rsp+5F8h] [rbp+4F8h]
  wchar_t *v380; // [rsp+600h] [rbp+500h]
  int v381; // [rsp+608h] [rbp+508h]
  __m128i *v382; // [rsp+610h] [rbp+510h]
  int v383; // [rsp+618h] [rbp+518h]
  unsigned __int64 v384; // [rsp+620h] [rbp+520h]
  int v385; // [rsp+628h] [rbp+528h]
  _BYTE v386[48]; // [rsp+6D0h] [rbp+5D0h] BYREF
  _BYTE v387[384]; // [rsp+700h] [rbp+600h] BYREF
  _BYTE v388[384]; // [rsp+880h] [rbp+780h] BYREF
  _WORD v389[192]; // [rsp+A00h] [rbp+900h] BYREF
  _BYTE v390[32]; // [rsp+B80h] [rbp+A80h] BYREF
  NtlmCredIsoInProc *v391; // [rsp+BA0h] [rbp+AA0h] BYREF
  _DWORD v392[12]; // [rsp+D00h] [rbp+C00h] BYREF
  _QWORD v393[2]; // [rsp+D30h] [rbp+C30h] BYREF
  __int64 v394; // [rsp+D40h] [rbp+C40h] BYREF
  _BYTE v395[56]; // [rsp+D48h] [rbp+C48h] BYREF
  _BYTE v396[528]; // [rsp+D80h] [rbp+C80h] BYREF
  char v397; // [rsp+F90h] [rbp+E90h] BYREF
  char v398; // [rsp+1190h] [rbp+1090h] BYREF

  v16 = 0;
  v17 = a8;
  v19 = a15;
  v297 = a6;
  v21 = 0;
  v318 = a7;
  v289 = a9;
  v327 = a10;
  v314 = a11;
  v309 = a12;
  v308 = a13;
  v324 = a14;
  v286 = a1;
  v258 = a2;
  v312 = a16;
  Src[0] = (void *)client_buf_base;
  LocallyUniqueId = a8;
  v255 = a15;
  NetworkProfile = 0;
  v273 = 3;
  hMem = 0;
  v256 = 0;
  v270 = 0;
  v269 = 0;
  v271 = 0;
  v261 = 0;
  v263 = 0;
  v254 = 0;
  v260 = 0;
  Sid = 0;
  v252 = 0;
  v284 = 0;
  SourceString = 0;
  v272 = 0;
  LOBYTE(v278) = 0;
  v257 = 1;
  v266 = 0;
  v259 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&DomainName1.Length = 0;
  DomainName1.Buffer = 0;
  v275 = 0;
  memset_0(&v367, 0, sizeof(v367));
  memset_0(&v353, 0, 0x68u);
  v264 = 0;
  v293 = 0;
  memset(RandomBuffer, 0, sizeof(RandomBuffer));
  v325 = (UNICODE_STRING)0LL;
  v268 = 0;
  *(_DWORD *)&v311.Length = 0;
  v311.Buffer = 0;
  *(_DWORD *)&v310.Length = 0;
  v310.Buffer = 0;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0;
  v249 = 0;
  memset(v366, 0, sizeof(v366));
  memset_0(v395, 0, 0x2Cu);
  v251 = 0;
  v304 = 0;
  v305 = 0;
  v301 = 0;
  v302 = 0;
  v315 = 0u;
  *(_QWORD *)&v321.Length = 0;
  v321.Buffer = 0;
  v332 = L"NTLM";
  v296 = 0;
  Size = 0;
  v276 = 0;
  *(_QWORD *)&v303.Length = 0;
  v317 = 0;
  v294 = 0;
  v265 = 0;
  v274 = 0;
  v299 = 0;
  v292 = 0;
  v306 = 0;
  v285 = 0;
  v267 = 0;
  v331 = 655368;
  memset_0(v370, 0, 0x130u);
  memset_0(v387, 0, sizeof(v387));
  memset_0(v388, 0, sizeof(v388));
  v280 = 0;
  v290 = 0;
  v295 = 0;
  v281 = 0;
  v298 = 0;
  v316 = 0;
  v277 = 0;
  v291 = proto_buf_base;
  if ( v286 == -1 )
  {
    v22 = 0;
    v328 = 0;
    v329 = 0;
    v330 = 0;
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(LsaFunctions + 192))(&v328) )
    {
      v24 = -1073741595;
      v25 = 0;
      NetworkProfile = -1073741595;
LABEL_510:
      v94 = v252;
      goto LABEL_511;
    }
    v22 = v329;
  }
  if ( v258 == CachedInteractive )
  {
    v277 = 1;
    v258 = Interactive;
    v257 = 0;
  }
  if ( NtlmGlobalEventTraceFlag )
  {
    v370[0] = 48;
    v372 = NtlmLogonGuid;
    v371 = 1;
    v373 = 0x20000;
    EtwLogTraceEvent(NtlmGlobalTraceLoggerHandle, v370);
    v22 = v329;
  }
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  *(_DWORD *)&DomainName1.Length = 33423360;
  v311.Buffer = 0;
  *v297 = 0;
  v310.Buffer = 0;
  String.Buffer = 0;
  *v289 = 0;
  *v308 = 0;
  *v309 = 0;
  DestinationString.Buffer = (wchar_t *)&v398;
  DomainName1.Buffer = (wchar_t *)&v397;
  *v312 = 0;
  memset_0(v19, 0, sizeof(struct _SECPKG_PRIMARY_CRED));
  if ( v258 < Interactive || v258 > Service && v258 != NetworkCleartext && v258 != RemoteInteractive )
  {
    v231 = (PUNICODE_STRING *)v309;
    v237 = 3221225739LL;
    v235 = (PUNICODE_STRING *)v308;
    NetworkProfile = -1073741557;
    goto LABEL_947;
  }
  memset_0(v389, 0, sizeof(v389));
  v28 = proto_buf_base;
  v29 = submit_buf_len;
  if ( v258 == Network )
  {
    if ( submit_buf_len < 4 )
      goto LABEL_252;
    MessageType = proto_buf_base->MessageType;
    if ( proto_buf_base->MessageType != MsV1_0InteractiveLogon )
      goto LABEL_20;
  }
  if ( v258 != Batch
    || submit_buf_len < 4
    || (MessageType = proto_buf_base->MessageType, proto_buf_base->MessageType != MsV1_0S4ULogon) )
  {
LABEL_252:
    if ( (v22 & 0x40) != 0 )
    {
      v69 = MsvConvertWOWInteractiveLogonBuffer(proto_buf_base, v27, &submit_buf_len, &v291);
      v27 = 0;
      NetworkProfile = v69;
      v24 = v69;
      if ( v69 < 0 )
        goto LABEL_507;
      v28 = v291;
      v29 = submit_buf_len;
      HIDWORD(Size) = 1;
    }
    SourceString = &NlpComputerName;
    if ( v29 < 0x38 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 66, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids, v29);
      goto LABEL_259;
    }
    LOBYTE(v23) = 2;
    if ( v28->MessageType != MsV1_0InteractiveLogon && v28->MessageType != MsV1_0WorkstationUnlockLogon )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          67,
          &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
          (unsigned int)v28->MessageType);
      v24 = -1073741657;
      goto LABEL_260;
    }
    p_Length = &v28->Password.Length;
    Length = v28->Password.Length;
    if ( Length > v28->Password.MaximumLength )
    {
      v72 = HIBYTE(Length);
      p_UserName = &v28->UserName;
      HIBYTE(v28->Password.Length) = 0;
      if ( v28->UserName.Length > 0x200u || (v74 = *p_Length, *p_Length > 0x200u) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 68, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
        v24 = -1073741562;
        goto LABEL_260;
      }
      Buffer = (unsigned __int64)v28->Password.Buffer;
      if ( Buffer )
      {
        v76 = (unsigned __int64)Src[0];
        if ( v74 )
        {
          if ( (void *)Buffer >= Src[0] )
            Buffer -= (unsigned __int64)Src[0];
          if ( !Buffer )
            goto LABEL_259;
          LOBYTE(v23) = v29;
          if ( Buffer > v29 )
            goto LABEL_259;
          if ( Buffer + v74 > v29 )
            goto LABEL_259;
          if ( Buffer < 0x38 )
            goto LABEL_259;
          if ( (Buffer & 1) != 0 )
            goto LABEL_259;
          v28->Password.MaximumLength = v74;
          v28->Password.Buffer = (wchar_t *)((char *)v28 + Buffer);
          if ( (v74 & 1) != 0 )
            goto LABEL_259;
        }
        else
        {
          v28->Password.Buffer = 0;
        }
        goto LABEL_274;
      }
      if ( !v74 )
      {
        v76 = (unsigned __int64)Src[0];
LABEL_274:
        if ( (_BYTE)v72 )
          RtlRunDecodeUnicodeString(v72, &v28->Password);
        goto LABEL_310;
      }
LABEL_259:
      v24 = -1073741811;
LABEL_260:
      NetworkProfile = v24;
LABEL_261:
      proto_buf_base = v28;
      goto LABEL_507;
    }
    if ( Length > 0xFFFCu || (p_UserName = &v28->UserName, v28->UserName.Length > 0x200u) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 69, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
      proto_buf_base = v28;
      goto LABEL_505;
    }
    v77 = (unsigned __int64)v28->Password.Buffer;
    if ( v77 )
    {
      if ( !Length )
      {
        v28->Password.Buffer = 0;
        goto LABEL_296;
      }
      if ( (void *)v77 >= Src[0] )
        v77 -= (unsigned __int64)Src[0];
      if ( !v77 )
        goto LABEL_259;
      v27 = v29;
      if ( v77 > v29 || v77 + Length > v29 || v77 < 0x38 || (v77 & 1) != 0 )
        goto LABEL_259;
      v28->Password.MaximumLength = Length;
      v28->Password.Buffer = (wchar_t *)((char *)v28 + v77);
      v78 = (Length & 1) == 0;
    }
    else
    {
      v78 = Length == 0;
    }
    if ( !v78 )
      goto LABEL_259;
LABEL_296:
    v317 = (WCHAR *)((__int64 (__fastcall *)(__int64, __int64))qword_1800664E0)(Length + 2LL, v27);
    v79 = v317;
    if ( !v317 )
    {
      v24 = -1073741670;
      goto LABEL_260;
    }
    v80 = *p_Length;
    v81 = v28->Password.Buffer;
    v294 = v80 + 2;
    memcpy_0(v317, v81, v80);
    NetworkProfile = NtLmDecodeSecret(v79, 0);
    v24 = NetworkProfile;
    proto_buf_base = v28;
    if ( NetworkProfile < 0 )
      goto LABEL_507;
    v76 = (unsigned __int64)Src[0];
    *(_OWORD *)p_Length = v315;
LABEL_310:
    if ( v258 == Service )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *))(LsaFunctions + 192))(v344) )
      {
        if ( (v345 & 0x200) != 0 )
        {
          RtlInitUnicodeString(&String1, L"_SC_");
          if ( RtlPrefixUnicodeString(&String1, &v28->Password, 1u) )
          {
            v24 = LsarOpenSecret(NtLmGlobalPolicyHandle, &v28->Password, 2, &v313);
            NetworkProfile = v24;
            if ( v24 < 0 )
            {
LABEL_320:
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 70, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
                v24 = NetworkProfile;
              }
              goto LABEL_261;
            }
            NetworkProfile = LsarQuerySecret(v313, &v293, 0, 0, 0);
            if ( NetworkProfile >= 0 && v293 )
            {
              v82 = *(UNICODE_STRING *)p_Length;
              *p_Length = *(_WORD *)v293;
              v325 = v82;
              v268 = 1;
              v28->Password.MaximumLength = *(_WORD *)(v293 + 4);
              v28->Password.Buffer = *(wchar_t **)(v293 + 8);
            }
            LsarClose(&v313);
          }
        }
      }
      v24 = NetworkProfile;
      if ( NetworkProfile < 0 )
        goto LABEL_320;
    }
    v83 = (unsigned __int64)v28->LogonDomainName.Buffer;
    p_LogonDomainName = &v28->LogonDomainName;
    v85 = v28->LogonDomainName.Length;
    if ( v83 )
    {
      if ( (_WORD)v85 )
      {
        if ( v83 >= v76 )
          v83 -= v76;
        if ( !v83 )
          goto LABEL_325;
        if ( v83 > v29 )
          goto LABEL_325;
        if ( v83 + (unsigned __int16)v85 > v29 )
          goto LABEL_325;
        if ( v83 < 0x38 )
          goto LABEL_325;
        if ( (v83 & 1) != 0 )
          goto LABEL_325;
        v28->LogonDomainName.MaximumLength = v85;
        v28->LogonDomainName.Buffer = (wchar_t *)((char *)v28 + v83);
        if ( (v85 & 1) != 0 )
          goto LABEL_325;
      }
      else
      {
        v28->LogonDomainName.Buffer = 0;
      }
    }
    else if ( (_WORD)v85 )
    {
LABEL_325:
      proto_buf_base = v28;
      goto LABEL_57;
    }
    v86 = (unsigned __int64)v28->UserName.Buffer;
    if ( v86 >= v76 )
      v86 = (unsigned __int64)v28->UserName.Buffer - v76;
    if ( !v86 )
      goto LABEL_325;
    LOBYTE(v23) = v29;
    if ( v86 > v29 )
      goto LABEL_325;
    v87 = p_UserName->Length;
    if ( v86 + v87 > v29 )
      goto LABEL_325;
    if ( v86 < 0x38 )
      goto LABEL_325;
    if ( (v86 & 1) != 0 )
      goto LABEL_325;
    v28->UserName.MaximumLength = v87;
    v28->UserName.Buffer = (wchar_t *)((char *)v28 + v86);
    if ( (v87 & 1) != 0 )
      goto LABEL_325;
    if ( (unsigned __int16)v85 <= 2u && *p_Length <= 2u )
    {
      NetworkProfile = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD, __int64))(LsaFunctions + 128))(
                         v352,
                         v85,
                         v29,
                         1);
      proto_buf_base = v28;
      v24 = NetworkProfile;
      if ( NetworkProfile < 0 )
      {
        v17 = LocallyUniqueId;
        v25 = 0;
        goto LABEL_495;
      }
      v88 = CredpProcessUserNameCredential(
              (unsigned int)v352,
              (_DWORD)p_UserName,
              v258,
              (unsigned int)&v311,
              (__int64)&v310,
              (__int64)&String,
              (__int64)&v265);
      NetworkProfile = v88;
      v24 = v88;
      if ( v88 < 0 )
      {
        if ( v88 == -1073741637 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 71, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
            v24 = NetworkProfile;
          }
          goto LABEL_59;
        }
      }
      else
      {
        v89 = v310;
        *p_UserName = v311;
        *p_LogonDomainName = v89;
        *(struct _UNICODE_STRING *)p_Length = String;
      }
      NetworkProfile = 0;
    }
    RtlCopyUnicodeString(&DestinationString, p_UserName);
    if ( v28->LogonDomainName.Buffer )
      RtlCopyUnicodeString(&DomainName1, &v28->LogonDomainName);
    if ( DomainName1.Length == 2 && *DomainName1.Buffer == 46 )
      DomainName1 = NlpSamDomainName;
    v90 = *p_Length;
    v19 = v255;
    v255->Password.MaximumLength = *p_Length;
    v19->Password.Length = v90;
    v91 = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)(*p_Length);
    v19->Password.Buffer = v91;
    if ( !v91 )
    {
      v24 = -1073741670;
      NetworkProfile = -1073741670;
LABEL_349:
      proto_buf_base = v28;
LABEL_350:
      v21 = v256;
LABEL_351:
      v25 = v21;
LABEL_509:
      v17 = LocallyUniqueId;
      goto LABEL_510;
    }
    memcpy_0(v91, v28->Password.Buffer, *p_Length);
    v92 = v265;
    if ( v265 )
      v93 = v19->Flags | 0x20000;
    else
      v93 = 1;
    v19->Flags = v93;
    if ( v277 )
      v19->Flags = v93 | 0x40000;
    if ( v28->Password.Buffer )
      RtlEraseUnicodeString(&v28->Password);
    if ( v258 == Network && v28->MessageType == MsV1_0InteractiveLogon )
    {
      if ( (v92 & v19->Flags) != 0 )
      {
        proto_buf_base = v28;
        v21 = v256;
        v94 = v252;
        v25 = v256;
        v95 = v251;
        v17 = LocallyUniqueId;
        if ( (dword_180063E14 & 0x20) != 0 )
          v24 = -1073741637;
        else
          v24 = -1073741595;
        NetworkProfile = v24;
        goto LABEL_512;
      }
      v275 = 2;
      v264 = &v353;
      v353 = *p_LogonDomainName;
      LogonDomainName = *p_UserName;
      Password = NlpComputerName;
      v96 = -SystemFunction036(&v357, 8u);
      proto_buf_base = v28;
      v24 = v96 == 0 ? 0xC0000001 : 0;
      NetworkProfile = v24;
      if ( !v96 )
      {
        v17 = LocallyUniqueId;
LABEL_494:
        v25 = 0;
        goto LABEL_495;
      }
      v58 = 0;
      NetworkProfile = SystemFunction007(&v19->Password, v368);
      v24 = NetworkProfile;
      if ( NetworkProfile >= 0 )
      {
        MsvpLm3Response(v368, &LogonDomainName, &v353, &v357, RandomBuffer, RandomBuffer, 0, 0);
        v24 = NetworkProfile;
        UserName.Buffer = (wchar_t *)RandomBuffer;
        *(_DWORD *)&UserName.Length = 1572888;
      }
      memset(v368, 0, sizeof(v368));
      if ( v24 < 0 )
      {
        v17 = LocallyUniqueId;
        v25 = 0;
LABEL_495:
        v19 = v255;
LABEL_496:
        v21 = v256;
        goto LABEL_510;
      }
      *(_DWORD *)&v358.Length = 2883628;
      v358.Buffer = (wchar_t *)v395;
      goto LABEL_409;
    }
    GMSAPwdHash = MsvpGetGMSAPwdHash(
                    v19,
                    v258,
                    v28,
                    &DomainName1,
                    &v280,
                    (struct _MSV1_0_PRIMARY_CREDENTIAL *)v387,
                    (struct _MSV1_0_PRIMARY_CREDENTIAL *)v388);
    NetworkProfile = GMSAPwdHash;
    v24 = GMSAPwdHash;
    if ( GMSAPwdHash == -1073741790 || GMSAPwdHash == -1073741801 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          72,
          &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
          (unsigned int)GMSAPwdHash);
        v24 = NetworkProfile;
      }
      goto LABEL_349;
    }
    if ( GMSAPwdHash < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          73,
          &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
          (unsigned int)GMSAPwdHash);
      NetworkProfile = 0;
    }
    if ( !v280 )
    {
      TbalCredentials = MsvpGetTbalCredentials(v19, v258, v28, &v290, &v295);
      NetworkProfile = TbalCredentials;
      if ( TbalCredentials >= 0 )
      {
        v100 = 1;
        v281 = 1;
LABEL_399:
        p_DomainName1 = &DomainName1;
        v275 = 1;
        if ( !DomainName1.Length )
          p_DomainName1 = &v28->LogonDomainName;
        v264 = (PUNICODE_STRING)&v367;
        v102 = *p_DomainName1;
        v367.Identity.ParameterControl = 0;
        v367.Identity.LogonDomainName = v102;
        v103 = *p_UserName;
        v58 = 0;
        v367.Identity.UserName = v103;
        v367.Identity.Workstation = NlpComputerName;
        if ( v100 )
        {
          if ( *((_BYTE *)v290 + 42) )
            v367.LmOwfPassword = *(LM_OWF_PASSWORD *)((char *)v290 + 90);
          if ( *((_BYTE *)v290 + 41) )
            v367.NtOwfPassword = *(NT_OWF_PASSWORD *)((char *)v290 + 74);
        }
        else
        {
          v367.LmOwfPassword = *(LM_OWF_PASSWORD *)&v389[45];
          v367.NtOwfPassword = *(NT_OWF_PASSWORD *)&v389[37];
          memset(v389, 0, sizeof(v389));
        }
        proto_buf_base = v28;
        goto LABEL_409;
      }
      v98 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          74,
          &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
          (unsigned int)TbalCredentials);
      NetworkProfile = 0;
    }
    LOBYTE(v98) = v19->Flags & 2;
    MsvpPutClearOwfsInPrimaryCredential(&v19->Password, v98, &v389[16]);
    v100 = 0;
    goto LABEL_399;
  }
LABEL_20:
  LOBYTE(v277) = 0;
  if ( (v22 & 0x40) != 0 )
  {
    if ( MessageType == MsV1_0S4ULogon )
      v31 = MsvConvertWOWS4ULogonBuffer(proto_buf_base, v27, &submit_buf_len, &v291);
    else
      v31 = MsvConvertWOWNetworkLogonBuffer(proto_buf_base, v27, &submit_buf_len, &v291);
    NetworkProfile = v31;
    v24 = v31;
    if ( v31 < 0 )
    {
      v25 = 0;
LABEL_508:
      v19 = v255;
      goto LABEL_509;
    }
    proto_buf_base = v291;
    v29 = submit_buf_len;
    HIDWORD(Size) = 1;
  }
  if ( v29 < 4 )
  {
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
      goto LABEL_32;
    v33 = 75;
    goto LABEL_31;
  }
  v34 = proto_buf_base->MessageType;
  if ( (unsigned int)(proto_buf_base->MessageType - 3) <= 2 )
  {
    if ( v34 != MsV1_0S4ULogon )
    {
      if ( v34 == MsV1_0SubAuthLogon )
      {
        if ( v29 >= 0x68 )
          goto LABEL_53;
        v32 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
          goto LABEL_32;
        v33 = 78;
      }
      else
      {
        if ( v29 >= 0x68 )
          goto LABEL_53;
        v32 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
          goto LABEL_32;
        v33 = 79;
      }
LABEL_31:
      WPP_SF_D(v32[2], v33, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids, v29);
      goto LABEL_32;
    }
  }
  else if ( v34 != MsV1_0S4ULogon )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        76,
        &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
        (unsigned int)v34);
    v24 = -1073741657;
    goto LABEL_506;
  }
  if ( v29 < 0x28 )
  {
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
      goto LABEL_32;
    v33 = 77;
    goto LABEL_31;
  }
LABEL_53:
  v275 = 2;
  v264 = &v353;
  if ( proto_buf_base->MessageType == MsV1_0S4ULogon )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(LsaFunctions + 192))(v340) )
    {
      v24 = -1073741595;
      goto LABEL_506;
    }
    v59 = v255;
    if ( (v341 & 0x200) == 0 )
      v255->Flags |= 0x10u;
    v60 = (unsigned __int64)proto_buf_base->LogonDomainName.Buffer;
    *(_QWORD *)&v303.Length = proto_buf_base;
    if ( v60 >= client_buf_base )
      v60 -= client_buf_base;
    if ( !v60
      || v60 > v29
      || (v23 = proto_buf_base->LogonDomainName.Length, v60 + v23 > v29)
      || v60 < 0x28
      || (v60 & 1) != 0
      || (proto_buf_base->LogonDomainName.MaximumLength = v23,
          proto_buf_base->LogonDomainName.Buffer = (wchar_t *)((char *)proto_buf_base + v60),
          (v23 & 1) != 0) )
    {
LABEL_32:
      v24 = -1073741811;
LABEL_506:
      NetworkProfile = v24;
      goto LABEL_507;
    }
    v61 = (unsigned __int64)proto_buf_base->UserName.Buffer;
    v62 = proto_buf_base->UserName.Length;
    if ( v61 )
    {
      if ( v62 )
      {
        if ( v61 >= client_buf_base )
          v61 -= client_buf_base;
        if ( !v61 )
          goto LABEL_32;
        if ( v61 > v29 )
          goto LABEL_32;
        if ( v61 + v62 > v29 )
          goto LABEL_32;
        if ( v61 < 0x28 )
          goto LABEL_32;
        if ( (v61 & 1) != 0 )
          goto LABEL_32;
        proto_buf_base->UserName.MaximumLength = v62;
        v63 = (char *)proto_buf_base + v61;
        proto_buf_base->UserName.Buffer = (wchar_t *)((char *)proto_buf_base + v61);
        if ( (v62 & 1) != 0 )
          goto LABEL_32;
LABEL_223:
        if ( (unsigned __int16)v23 <= 0x402u )
        {
          if ( v62 <= 0x200u )
          {
            if ( v63 )
              RtlCopyUnicodeString(&DomainName1, &proto_buf_base->UserName);
            if ( !NlpSamInitialized )
            {
              NetworkProfile = NlSamInitialize();
              v24 = NetworkProfile;
              if ( NetworkProfile < 0 )
                goto LABEL_507;
            }
            if ( DomainName1.Length == 2 && *DomainName1.Buffer == 46 )
              DomainName1 = NlpSamDomainName;
            if ( !RtlEqualDomainName(&DomainName1, &NlpSamDomainName) )
            {
              if ( (v341 & 0x200) == 0 || (NtLmCheckProcessOption() & 0x20) == 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
                {
                  WPP_SF_Z(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    87,
                    &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
                    &proto_buf_base->UserName);
                }
                v24 = -1073741637;
                goto LABEL_506;
              }
              v59->Flags |= 0x10u;
              v259 = 1;
            }
            v67 = &DomainName1;
            if ( !DomainName1.Length )
              v67 = &proto_buf_base->UserName;
            LogonDomainName = proto_buf_base->LogonDomainName;
            v68 = *v67;
            v354 = 0x20000;
            Password = NlpComputerName;
            v353 = v68;
            if ( (*(_BYTE *)(&proto_buf_base->MessageType + 1) & 2) != 0 )
              v354 = 393216;
LABEL_247:
            v19 = v255;
            v58 = 0;
LABEL_409:
            v57 = v273;
            goto LABEL_410;
          }
          v64 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
          {
LABEL_505:
            v24 = -1073741562;
            goto LABEL_506;
          }
          v65 = v62;
          v66 = 86;
        }
        else
        {
          v64 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
            goto LABEL_505;
          v65 = (unsigned int)v23;
          v66 = 85;
        }
        WPP_SF_D(v64[2], v66, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids, v65);
        goto LABEL_505;
      }
      proto_buf_base->UserName.Buffer = 0;
    }
    else if ( v62 )
    {
      goto LABEL_32;
    }
    v63 = 0;
    goto LABEL_223;
  }
  v35 = (unsigned __int64)proto_buf_base->LogonDomainName.Buffer;
  v36 = proto_buf_base->LogonDomainName.Length;
  if ( v35 )
  {
    if ( !v36 )
    {
      proto_buf_base->LogonDomainName.Buffer = 0;
      goto LABEL_62;
    }
    if ( v35 >= client_buf_base )
      v35 -= client_buf_base;
    if ( !v35 || v35 > v29 || v35 + v36 > v29 || v35 < 0x68 || (v35 & 1) != 0 )
      goto LABEL_57;
    proto_buf_base->LogonDomainName.MaximumLength = v36;
    proto_buf_base->LogonDomainName.Buffer = (wchar_t *)((char *)proto_buf_base + v35);
    v37 = (v36 & 1) == 0;
  }
  else
  {
    v37 = v36 == 0;
  }
  if ( !v37 )
  {
LABEL_57:
    v24 = -1073741811;
LABEL_58:
    NetworkProfile = v24;
LABEL_59:
    v21 = v256;
LABEL_507:
    v25 = v21;
    goto LABEL_508;
  }
LABEL_62:
  name_buf_org = (unsigned __int64)proto_buf_base->UserName.Buffer;
  name_len = proto_buf_base->UserName.Length;
  if ( name_buf_org )
  {
    if ( !name_len )
    {
      proto_buf_base->UserName.Buffer = 0;
      name_buf_org = 0;
      goto LABEL_65;
    }
    if ( name_buf_org >= client_buf_base )
      name_buf_org -= client_buf_base;
    if ( !name_buf_org
      || name_buf_org > v29
      || name_buf_org + name_len > v29
      || name_buf_org < 0x68
      || (name_buf_org & 1) != 0 )
    {
      goto LABEL_57;
    }
    name_buf_org += (unsigned __int64)proto_buf_base;
    proto_buf_base->UserName.MaximumLength = name_len;
    proto_buf_base->UserName.Buffer = (wchar_t *)name_buf_org;
    name_len_valid = (name_len & 1) == 0;
  }
  else
  {
    name_len_valid = name_len == 0;
  }
  if ( !name_len_valid )
    goto LABEL_57;
LABEL_65:
  buf_org = (unsigned __int64)proto_buf_base->Password.Buffer;
  if ( buf_org >= client_buf_base )
    buf_org = (unsigned __int64)proto_buf_base->Password.Buffer - client_buf_base;
  if ( !buf_org )
    goto LABEL_57;
  if ( buf_org > v29 )
    goto LABEL_57;
  v42 = proto_buf_base->Password.Length;
  if ( buf_org + v42 > v29 )
    goto LABEL_57;
  if ( buf_org < 0x68 )
    goto LABEL_57;
  if ( (buf_org & 1) != 0 )
    goto LABEL_57;
  proto_buf_base->Password.MaximumLength = v42;
  proto_buf_base->Password.Buffer = (wchar_t *)((char *)proto_buf_base + buf_org);
  if ( (v42 & 1) != 0 )
    goto LABEL_57;
  if ( name_buf_org )
    RtlCopyUnicodeString(&DestinationString, &proto_buf_base->UserName);
  if ( proto_buf_base->LogonDomainName.Buffer )
    RtlCopyUnicodeString(&DomainName1, &proto_buf_base->LogonDomainName);
  v43 = (unsigned __int64)proto_buf_base[1].LogonDomainName.Buffer;
  v44 = &proto_buf_base[1].LogonDomainName;
  v45 = proto_buf_base[1].LogonDomainName.Length;
  if ( v43 )
  {
    if ( v45 )
    {
      if ( v43 >= client_buf_base )
        v43 -= client_buf_base;
      if ( !v43 || v43 > v29 || v43 + v45 > v29 || v43 < 0x68 || (v43 & 1) != 0 )
        goto LABEL_57;
      proto_buf_base[1].LogonDomainName.MaximumLength = v45;
      proto_buf_base[1].LogonDomainName.Buffer = (wchar_t *)((char *)proto_buf_base + v43);
    }
    else
    {
      proto_buf_base[1].LogonDomainName.Buffer = 0;
    }
  }
  else if ( v45 )
  {
    goto LABEL_57;
  }
  v46 = (unsigned __int64)proto_buf_base[1].UserName.Buffer;
  v47 = proto_buf_base[1].UserName.Length;
  if ( v46 )
  {
    if ( (_WORD)v47 )
    {
      if ( v46 >= client_buf_base )
        v46 -= client_buf_base;
      if ( !v46 || v46 > v29 || v46 + (unsigned __int16)v47 > v29 || v46 < 0x68 || (v46 & 1) != 0 )
        goto LABEL_57;
      proto_buf_base[1].UserName.MaximumLength = v47;
      proto_buf_base[1].UserName.Buffer = (wchar_t *)((char *)proto_buf_base + v46);
    }
    else
    {
      proto_buf_base[1].UserName.Buffer = 0;
    }
  }
  else if ( (_WORD)v47 )
  {
    goto LABEL_57;
  }
  v48 = &DomainName1;
  if ( !DomainName1.Length )
    v48 = &proto_buf_base->LogonDomainName;
  v353 = *v48;
  if ( NlpWorkstation && v258 == Network && proto_buf_base->MessageType == MsV1_0NetworkLogon )
  {
    NetworkProfile = MsvpMapConnectedUserLogon(&DestinationString, &DomainName1, &v321);
    if ( NetworkProfile >= 0 )
    {
      v274 = 1;
      v354 = 0x80000;
      goto LABEL_129;
    }
    NetworkProfile = 0;
  }
  v354 = 0;
LABEL_129:
  if ( (*(_DWORD *)&proto_buf_base[1].Password.Length & 0x4000) == 0 )
  {
    v51 = &proto_buf_base->UserName;
    v52 = v277;
    if ( v286 != -1 )
      v52 = 1;
    goto LABEL_158;
  }
  v49 = NtLmGlobalLmProtocolSupported;
  v393[0] = 0;
  LODWORD(v393[1]) = 0;
  WORD2(v393[1]) = 0;
  BYTE6(v393[1]) = 0;
  v394 = 0;
  if ( !SystemFunction036(&proto_buf_base[1], 8u) )
  {
LABEL_148:
    v24 = -1073741823;
    NetworkProfile = -1073741823;
LABEL_149:
    v51 = &proto_buf_base->UserName;
    goto LABEL_150;
  }
  NetworkProfile = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 80, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
  *(_DWORD *)&proto_buf_base[1].Password.Length &= ~0x80u;
  v50 = 14;
  if ( proto_buf_base[1].UserName.Length <= 0xEu )
    v50 = proto_buf_base[1].UserName.Length;
  memcpy_0(v393, proto_buf_base[1].UserName.Buffer, v50);
  NetworkProfile = SystemFunction006(v393, v369);
  v24 = NetworkProfile;
  if ( NetworkProfile < 0 )
    goto LABEL_149;
  NetworkProfile = SystemFunction007(&proto_buf_base[1].LogonDomainName, v365);
  v24 = NetworkProfile;
  if ( NetworkProfile < 0 )
    goto LABEL_149;
  if ( v49 < 3 )
  {
    *(_DWORD *)&proto_buf_base[1].Password.Length |= 0x80u;
    if ( SystemFunction036(RandomBuffer, 8u) )
    {
      NetworkProfile = 0;
      MsvpCalculateNtlm2Challenge((PUCHAR)&proto_buf_base[1], (PUCHAR)RandomBuffer);
      v51 = &proto_buf_base->UserName;
      goto LABEL_142;
    }
    goto LABEL_148;
  }
  v51 = &proto_buf_base->UserName;
  MsvpLm3Response(
    v365,
    &proto_buf_base->UserName,
    &proto_buf_base->LogonDomainName,
    &proto_buf_base[1],
    RandomBuffer,
    RandomBuffer,
    0,
    0);
  v44->Length = 44;
  proto_buf_base[1].LogonDomainName.MaximumLength = 44;
  proto_buf_base[1].LogonDomainName.Buffer = (wchar_t *)v395;
LABEL_142:
  v24 = NetworkProfile;
  if ( NetworkProfile >= 0 )
  {
    *(_DWORD *)&proto_buf_base[1].Password.Length &= 0xFFFFBFFD;
    *(_DWORD *)&proto_buf_base[1].UserName.Length = 1572888;
    proto_buf_base[1].UserName.Buffer = (wchar_t *)RandomBuffer;
    if ( v49 >= 3 )
    {
      v44->Length = 0;
      proto_buf_base[1].LogonDomainName.MaximumLength = 0;
      goto LABEL_146;
    }
    NetworkProfile = SystemFunction009(&v394, v365, v366);
    v24 = NetworkProfile;
    if ( NetworkProfile >= 0 )
    {
      v44->Length = 24;
      proto_buf_base[1].LogonDomainName.Buffer = (wchar_t *)v366;
      proto_buf_base[1].LogonDomainName.MaximumLength = 24;
LABEL_146:
      v24 = NetworkProfile;
    }
  }
LABEL_150:
  v47 = 16;
  memset(v365, 0, sizeof(v365));
  memset(v369, 0, sizeof(v369));
  memset(v393, 0, 0xFu);
  if ( v24 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 81, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
      v24 = NetworkProfile;
    }
    v21 = 0;
    goto LABEL_507;
  }
  v52 = v277;
LABEL_158:
  if ( proto_buf_base->MessageType == MsV1_0Lm20Logon )
  {
    v354 |= 2u;
    goto LABEL_170;
  }
  if ( (*(_DWORD *)&proto_buf_base[1].Password.Length & 0x10000) != 0
    && !(unsigned int)LsaIEqualLogonProcessName(L"IAS", v47)
    && !(unsigned int)LsaIEqualLogonProcessName(L"CHAP", v47) )
  {
    *(_DWORD *)&proto_buf_base[1].Password.Length &= ~0x10000u;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 82, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
  }
  v53 = *(_DWORD *)&proto_buf_base[1].Password.Length | v354;
  v354 = v53;
  if ( proto_buf_base->MessageType != MsV1_0SubAuthLogon )
  {
    if ( (*(_DWORD *)&proto_buf_base[1].Password.Length & 0xFF000000) != 0 )
      v52 = 1;
LABEL_170:
    if ( !v52 )
      goto LABEL_177;
    goto LABEL_171;
  }
  v54 = v53 | (*(_DWORD *)(&proto_buf_base[1].Password.MaximumLength + 1) << 24);
  v272 = 1;
  v354 = v54 | 0x100000;
LABEL_171:
  if ( !(*(unsigned __int8 (__fastcall **)(char *, __int64))(LsaFunctions + 192))(v342, v47) || (v343 & 0x200) == 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 83, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
    v24 = -1073741790;
    goto LABEL_58;
  }
LABEL_177:
  v55 = *v51;
  SourceString = &proto_buf_base->Password;
  LogonDomainName = v55;
  Password = proto_buf_base->Password;
  v358 = *v44;
  UserName = proto_buf_base[1].UserName;
  if ( SLOBYTE(proto_buf_base[1].Password.Length) < 0 && v44->Length == 24 && proto_buf_base[1].UserName.Length >= 8u )
    MsvpCalculateNtlm2Challenge((PUCHAR)&proto_buf_base[1], (PUCHAR)proto_buf_base[1].UserName.Buffer);
  else
    v357 = *(_QWORD *)&proto_buf_base[1].MessageType;
  if ( SLOBYTE(proto_buf_base[1].Password.Length) < 0 )
  {
    v56 = (unsigned __int8)v278;
    if ( v44->Length >= 0x30u )
      v56 = 1;
    v278 = v56;
  }
  if ( v51->Length > 0x200u )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 84, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
    v24 = -1073741562;
    goto LABEL_58;
  }
  if ( v51->Length
    || v44->Length
    || proto_buf_base[1].UserName.Length
    && (proto_buf_base[1].UserName.Length != 1 || *(_BYTE *)proto_buf_base[1].UserName.Buffer) )
  {
    goto LABEL_247;
  }
  v19 = v255;
  v57 = 0;
  v273 = 0;
  v58 = 0;
LABEL_410:
  v17 = LocallyUniqueId;
  NetworkProfile = NtAllocateLocallyUniqueId(LocallyUniqueId);
  v24 = NetworkProfile;
  if ( NetworkProfile < 0 )
    goto LABEL_494;
  *(_DWORD *)(&v264[1].MaximumLength + 1) = LocallyUniqueId->LowPart;
  LODWORD(v264[1].Buffer) = v17->HighPart;
  v104 = *v17;
  v19->Flags |= 0xA000000u;
  v19->LogonId = v104;
  NetworkProfile = ((__int64 (__fastcall *)(LUID *))Lsa)(v17);
  v24 = NetworkProfile;
  if ( NetworkProfile < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        88,
        &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
        (unsigned int)NetworkProfile);
      v24 = NetworkProfile;
    }
    v21 = v256;
    v25 = v256;
    goto LABEL_510;
  }
  v269 = 1;
  if ( !v57 )
  {
    v58 = v260;
    goto LABEL_423;
  }
  if ( !NlpSamInitialized )
  {
    NetworkProfile = NlSamInitialize();
    v24 = NetworkProfile;
    if ( NetworkProfile < 0 )
      goto LABEL_494;
  }
  if ( NlpWorkstation )
  {
    RtlAcquireResourceShared(&NtLmGlobalCritSect, 1u);
    v58 = NtLmGlobalTargetFlags == 0x20000;
    v260 = NtLmGlobalTargetFlags == 0x20000;
    RtlReleaseResource(&NtLmGlobalCritSect);
  }
  else
  {
    v260 = 0;
  }
LABEL_423:
  if ( (_BYTE)v278 )
  {
    v106 = proto_buf_base[1].LogonDomainName.Length;
    v107 = proto_buf_base[1].LogonDomainName.Buffer + 22;
    v108 = (_DWORD *)MsvpAvlGet(v107, 1, (unsigned int)(v106 - 48));
    if ( v108 )
    {
      v109 = HIWORD(*v108);
      if ( HIWORD(*v108) >= 0x202u )
      {
        LOWORD(v109) = 514;
        String2.Length = 514;
      }
      else
      {
        String2.Length = HIWORD(*v108);
      }
      memcpy_0(v396, v108 + 1, (unsigned __int16)v109);
      String2.MaximumLength = v109;
      String2.Buffer = (wchar_t *)v396;
      if ( !RtlEqualUnicodeString(&NlpComputerName, &String2, 1u) )
      {
        v110 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) == 0 )
          goto LABEL_433;
        v111 = 89;
LABEL_432:
        WPP_SF_(v110[2], v111, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
LABEL_433:
        v24 = -1073741715;
        NetworkProfile = -1073741715;
        goto LABEL_350;
      }
    }
    else if ( (unsigned int)NtLmGlobalLmProtocolSupported >= 6 )
    {
      v110 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) == 0 )
        goto LABEL_433;
      v111 = 90;
      goto LABEL_432;
    }
    v112 = (_DWORD *)MsvpAvlGet(v107, 2, (unsigned int)(v106 - 48));
    v25 = 0;
    if ( !v112 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 92, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
      goto LABEL_447;
    }
    v113 = HIWORD(*v112);
    if ( HIWORD(*v112) >= 0x202u )
    {
      LOWORD(v113) = 514;
      DomainName2.Length = 514;
    }
    else
    {
      DomainName2.Length = HIWORD(*v112);
    }
    memcpy_0(v396, v112 + 1, (unsigned __int16)v113);
    DomainName2.MaximumLength = v113;
    DomainName2.Buffer = (wchar_t *)v396;
    RtlAcquireResourceShared(&NtLmGlobalCritSect, 1u);
    if ( !RtlEqualDomainName(&NtLmGlobalUnicodeTargetName, &DomainName2) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
        WPP_SF_ZZ(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          91,
          (unsigned int)&WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
          (unsigned int)&NtLmGlobalUnicodeTargetName,
          (__int64)&DomainName2);
      RtlReleaseResource(&NtLmGlobalCritSect);
LABEL_447:
      v24 = -1073741715;
      v21 = 0;
      NetworkProfile = -1073741715;
      goto LABEL_509;
    }
    RtlReleaseResource(&NtLmGlobalCritSect);
    v17 = LocallyUniqueId;
  }
  if ( !v57 )
  {
    v25 = 0;
    goto LABEL_680;
  }
  if ( (!v58 || NtLmGlobalUnicodeDnsDomainNameString.Length)
    && (NtLmGlobalAllowS4UForDomainUsers || !*(_QWORD *)&v303.Length || v259)
    && !v274 )
  {
    if ( NlpWorkstation )
    {
      if ( v264->Length && RtlEqualDomainName(&NlpSamDomainName, v264) )
        goto LABEL_482;
      v95 = v264;
      if ( v264->Length == 2 && *v264->Buffer == 46 )
        goto LABEL_482;
      if ( NlpWorkstation )
      {
LABEL_470:
        if ( v58 || !NlpLanmanInstalled || v259 )
        {
          v114 = 0;
          v257 = 0;
          v249 = 1;
          NetworkProfile = -1073741730;
        }
        else
        {
          v114 = v257;
        }
        if ( v114 )
        {
          if ( (NtLmCheckProcessOption() & 0x10) != 0 )
          {
            v25 = 1;
            v249 = 1;
            v105 = WPP_GLOBAL_Control;
            v95 = (PUNICODE_STRING)&WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 93, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
          }
          else
          {
            v25 = v249;
          }
        }
        else
        {
          v25 = v249;
        }
LABEL_527:
        while ( 2 )
        {
          if ( NtLmGlobalBlockInbound && NlpWorkstation )
          {
            v254 = 1;
            v116 = -1073740776;
            NetworkProfile = -1073740776;
            NlpNetlogonInitialized = 0;
            v117 = (_DWORD)v264 + 48;
            if ( !v264 )
              v117 = 0;
            v118 = (_DWORD)v264 + 32;
            if ( !v264 )
              v118 = 0;
            SspLogNTLMServerBlockedHigher(v118, (_DWORD)v264, v117, v258, v286, 1);
            v24 = NetworkProfile;
            goto LABEL_577;
          }
          if ( !v114 || v25 )
          {
            v116 = -1073741730;
            goto LABEL_576;
          }
          if ( !NlpNetlogonInitialized )
          {
            v119 = NlWaitForNetlogon();
            NetworkProfile = v119;
            v24 = v119;
            if ( v119 >= 0 )
            {
              NlpNetlogonInitialized = 1;
            }
            else if ( v119 != -1073741422 )
            {
              goto LABEL_630;
            }
            if ( !NlpNetlogonInitialized )
            {
              v116 = -1073741422;
LABEL_576:
              NetworkProfile = v116;
              v24 = v116;
LABEL_577:
              v120 = v275;
              goto LABEL_578;
            }
          }
          v120 = v275;
          v254 = 0;
          v121 = MsvpNetILogonSamLogon(v105, v95);
          NetworkProfile = v121;
          v24 = v121;
          v116 = v121;
          if ( v121 >= 0 )
            goto LABEL_578;
          if ( v121 <= -1073741414 )
          {
            if ( v121 >= -1073741416 )
              goto LABEL_578;
            if ( v121 > -1073741710 )
            {
              if ( v121 != -1073741702 && v121 != -1073741515 && v121 != -1073741430 )
              {
                if ( v121 <= -1073741429 )
                  goto LABEL_573;
                if ( v121 <= -1073741427 )
                  goto LABEL_578;
                v122 = v121 == -1073741421;
LABEL_553:
                if ( v122 )
                  goto LABEL_578;
LABEL_573:
                v24 = -1073741422;
                NlpNetlogonInitialized = 0;
                NetworkProfile = -1073741422;
LABEL_579:
                if ( v264->Length )
                {
                  if ( RtlEqualDomainName(&NlpSamDomainName, v264)
                    || v264->Length == 2 && *v264->Buffer == 46
                    || !NlpWorkstation && RtlEqualDomainName(&NlpSamLocalDomainName, v264) )
                  {
LABEL_588:
                    if ( v264->Length && !NlpWorkstation && RtlEqualDomainName(&NlpSamLocalDomainName, v264) )
                      v123 = NlpSamLocalDomainHandle;
                    else
                      v123 = NlpSamDomainHandle;
                    v249 = 0;
                    v25 = 0;
                    v254 = 0;
                    v124 = MsvpSamValidateAtLogon(v123);
                    NetworkProfile = v124;
                    v24 = v124;
                    if ( v124 != -1073740943 )
                    {
                      if ( v124 >= 0 )
                      {
                        v125 = v263 | 8;
                        v263 |= 8u;
                        goto LABEL_598;
                      }
LABEL_630:
                      v21 = v256;
                      v95 = v251;
LABEL_631:
                      v94 = v252;
                      v17 = LocallyUniqueId;
                      goto LABEL_512;
                    }
                    v24 = -1073741730;
                    NetworkProfile = -1073741730;
LABEL_597:
                    v125 = v263;
LABEL_598:
                    if ( (v125 & 8) != 0 )
                    {
LABEL_679:
                      v17 = LocallyUniqueId;
                      goto LABEL_680;
                    }
                    if ( v24 >= 0 )
                    {
                      v263 |= 1u;
                      if ( NtLmGlobalAuditInbound && NlpWorkstation )
                      {
                        v150 = (_DWORD)v264 + 48;
                        if ( !v264 )
                          v150 = 0;
                        v151 = (_DWORD)v264 + 32;
                        if ( !v264 )
                          v151 = 0;
                        SspLogNTLMServerBlockedHigher(v151, (_DWORD)v264, v150, v258, v286, 0);
                      }
                      MsvpReportUsageWarningEvent();
                      if ( (unsigned int)v258 <= RemoteInteractive )
                      {
                        v152 = 1076;
                        if ( _bittest(&v152, v258) )
                        {
                          v367.Identity.ParameterControl = 10;
                          v17 = LocallyUniqueId;
                          NlpAddCacheEntry(&v367, (struct _NETLOGON_VALIDATION_SAM_INFO4 *)hMem, 0, 0, 0, 2);
                          goto LABEL_680;
                        }
                      }
                      goto LABEL_679;
                    }
                    if ( v24 != -1073741730
                      && v24 != -1073741422
                      && (v24 != -1073740776 || ((v258 - 2) & 0xFFFFFFF7) != 0) )
                    {
                      if ( ((v258 - 2) & 0xFFFFFFF7) == 0 )
                      {
                        if ( v24 == -1073741724 && v254 )
                          goto LABEL_611;
                        if ( v24 == -1073741712 || v24 == -1073741710 || v24 == -1073740781 )
                        {
                          if ( !v254 )
                          {
                            v126 = 0;
LABEL_613:
                            v127 = NlpDeleteCacheEntry(
                                     v24,
                                     v126,
                                     (unsigned __int16)v258,
                                     1,
                                     &v367.Identity.LogonDomainName);
                            if ( v127 < 0 )
                            {
                              v105 = WPP_GLOBAL_Control;
                              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
                              {
                                WPP_SF_D(
                                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                                  96,
                                  &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
                                  (unsigned int)v127);
                              }
                              v24 = NetworkProfile;
                              if ( v257 && NetworkProfile == -1073741724 && !v254 && v127 == -1073741730 )
                              {
                                v114 = 0;
                                v257 = 0;
                                NetworkProfile = -1073741730;
                                continue;
                              }
                              goto LABEL_630;
                            }
                            goto LABEL_637;
                          }
LABEL_611:
                          v126 = 1;
                          goto LABEL_613;
                        }
                      }
                      if ( v258 != Interactive && v258 != RemoteInteractive
                        || v24 != -1073741711 && v24 != -1073741276 && v24 != -1073741718 )
                      {
                        goto LABEL_630;
                      }
                      NlpDisableOptimizedLogon(0, &v367.Identity.LogonDomainName);
                      goto LABEL_637;
                    }
                    v274 = 0;
                    if ( !(*(unsigned __int8 (__fastcall **)(char *))(LsaFunctions + 192))(v346) )
                    {
                      v24 = -1073741595;
                      NetworkProfile = -1073741595;
                      goto LABEL_630;
                    }
                    if ( (v347 & 0x400) != 0 )
                    {
                      v128 = WPP_GLOBAL_Control;
                      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) == 0 )
                      {
                        goto LABEL_637;
                      }
                      v129 = 94;
                      goto LABEL_636;
                    }
                    v130 = NetworkProfile;
                    v266 = 1;
                    if ( v116 < 0 )
                      v130 = v116;
                    NetworkProfile = v130;
                    if ( (int)NlpGetCacheEntry(
                                v264,
                                0,
                                (__int64)&hMem,
                                v386,
                                (__int64)&v277,
                                (size_t)&v299,
                                (unsigned int)&v292) < 0 )
                    {
                      hMem = 0;
                      goto LABEL_637;
                    }
                    if ( v259 )
                    {
LABEL_665:
                      v139 = v299;
                      if ( v299 )
                      {
                        if ( v292 )
                        {
                          v140 = NlpValidateSupplementalData(v292, v299);
                          NetworkProfile = v140;
                          v24 = v140;
                          if ( v140 != -1073741275 )
                          {
                            v21 = v256;
                            v94 = v252;
                            v95 = v251;
                            v17 = LocallyUniqueId;
                            if ( v140 < 0 )
                              goto LABEL_512;
                            v141 = v139[2];
                            v285 = 0;
                            v306 = 0;
                            v142 = 0;
                            if ( v141 )
                            {
                              v143 = v139 + 3;
                              while ( *v143 != 1 )
                              {
                                v142 = (unsigned int)(v142 + 1);
                                v143 += 3;
                                if ( (unsigned int)v142 >= v141 )
                                  goto LABEL_675;
                              }
                              v144 = *((unsigned int *)v299 + 3 * v142 + 4);
                              v145 = *((_DWORD *)v299 + 3 * v142 + 5);
                              v306 = (char *)v299 + v144;
                              v285 = v145;
                            }
                          }
                        }
                      }
LABEL_675:
                      v146 = hMem;
                      v147 = v263;
                      v25 = 0;
                      HIBYTE(v19->Flags) = 0;
                      NetworkProfile = 0;
                      v249 = 0;
                      v19->Flags |= v146[42] & 0xFF000000;
                      v148 = v19->Flags | 8;
                      v19->Flags = v148;
                      if ( (v148 & 0xFF000000) != 0 && (v148 & 0xFF000000) != 0xA000000 )
                        v147 |= 4u;
                      *((_BYTE *)v146 + 171) = 0;
                      *((_DWORD *)hMem + 42) |= v274 | 0x24;
                      v263 = v147 | 2;
                      goto LABEL_679;
                    }
                    memset_0(v390, 0, 0x180u);
                    if ( v258 == Network )
                    {
                      v136 = Sid;
                      if ( !Sid )
                      {
                        Sid = (PSID)NlpMakeDomainRelativeSid(*((PSID *)hMem + 28));
                        v136 = Sid;
                        if ( !Sid )
                        {
                          v128 = WPP_GLOBAL_Control;
                          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                            || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
                          {
                            goto LABEL_637;
                          }
                          v129 = 95;
LABEL_636:
                          WPP_SF_(v128[2], v129, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
LABEL_637:
                          v24 = NetworkProfile;
                          goto LABEL_630;
                        }
                      }
                      PrimaryCredentialByUserSid = NlpGetPrimaryCredentialByUserSid(v136);
                    }
                    else
                    {
                      PrimaryCredentialByUserSid = MsvpComputeSaltedHashedPassword(
                                                     &v367.NtOwfPassword,
                                                     &v367.NtOwfPassword,
                                                     (char *)hMem + 48,
                                                     v277);
                    }
                    if ( PrimaryCredentialByUserSid < 0 )
                      goto LABEL_637;
                    v132 = v251;
                    if ( !v251 )
                    {
                      MsvpCachePasswordsToCredential(v386, &v391);
                      v132 = (struct _UNICODE_STRING *)v390;
                      v251 = (struct _UNICODE_STRING *)v390;
                      v391 = LocalhostNtLmCredIsoObj::IsoObj;
                    }
                    v278 = 0;
                    if ( v120 == 1 )
                    {
                      v133 = *(_QWORD *)&v132[2].Length;
                      v134 = &v367;
                      v135 = *(__int64 (__fastcall **)(__int64, char *, struct _NETLOGON_INTERACTIVE_INFO *))(*(_QWORD *)v133 + 56LL);
                    }
                    else
                    {
                      if ( v120 != 2 )
                      {
                        v24 = -1073741595;
LABEL_660:
                        v95 = v251;
                        NetworkProfile = v24;
                        if ( v251 == (struct _UNICODE_STRING *)v390 )
                        {
                          v138 = v251 + 2;
                          v251 = 0;
                          memset(v138, 0, 0x160u);
                          v24 = NetworkProfile;
                          v95 = 0;
                        }
                        v21 = v256;
                        v94 = v252;
                        v17 = LocallyUniqueId;
                        if ( v24 < 0 )
                          goto LABEL_512;
                        if ( !v278 )
                        {
                          v24 = -1073741718;
                          NetworkProfile = -1073741718;
                          goto LABEL_631;
                        }
                        goto LABEL_665;
                      }
                      v133 = *(_QWORD *)&v132[2].Length;
                      v134 = (struct _NETLOGON_INTERACTIVE_INFO *)&v353;
                      v135 = *(__int64 (__fastcall **)(__int64, char *, struct _NETLOGON_INTERACTIVE_INFO *))(*(_QWORD *)v133 + 64LL);
                    }
                    v137 = (char *)hMem + 232;
                    LOBYTE(v137) = 1;
                    v24 = v135(v133, v137, v134);
                    goto LABEL_660;
                  }
                  v24 = NetworkProfile;
                }
LABEL_586:
                if ( !v58 || v25 )
                  goto LABEL_597;
                goto LABEL_588;
              }
            }
            else if ( v121 < -1073741714
                   && v121 != -1073741821
                   && v121 != -1073741811
                   && v121 != -1073741790
                   && v121 != -1073741724 )
            {
              v122 = v121 == -1073741718;
              goto LABEL_553;
            }
LABEL_578:
            if ( NlpNetlogonInitialized )
              goto LABEL_586;
            goto LABEL_579;
          }
          break;
        }
        if ( v121 > -1073610734 )
        {
          if ( v121 != -1073610729 && v121 != -1073610698 && v121 != -1073610692 && v121 != -1073610672 )
            goto LABEL_573;
        }
        else if ( v121 != -1073610734 )
        {
          if ( v121 != -1073741276
            && v121 != -1073741260
            && v121 != -1073741062
            && v121 != -1073740781
            && v121 != -1073740776 )
          {
            goto LABEL_573;
          }
          goto LABEL_578;
        }
        v116 = -1073741730;
        NlpNetlogonInitialized = 0;
        v24 = -1073741730;
        NetworkProfile = -1073741730;
        goto LABEL_578;
      }
    }
    if ( !v264->Length || !RtlEqualDomainName(&NlpSamLocalDomainName, v264) )
    {
      v95 = v264;
      if ( v264->Length != 2 || *v264->Buffer != 46 )
        goto LABEL_470;
    }
  }
LABEL_482:
  if ( v264->Length && !NlpWorkstation && RtlEqualDomainName(&NlpSamLocalDomainName, v264) )
    v23 = NlpSamLocalDomainHandle;
  else
    v23 = NlpSamDomainHandle;
  if ( !v257 )
  {
    v24 = -1073741637;
    v21 = 0;
    NetworkProfile = -1073741637;
    goto LABEL_351;
  }
  v25 = 0;
  v249 = 0;
  v254 = 0;
  v17 = LocallyUniqueId;
  v24 = MsvpSamValidateAtLogon(v23);
  NetworkProfile = v24;
  if ( v24 < 0 )
    goto LABEL_495;
  v263 = 8;
LABEL_680:
  if ( (unsigned int)v258 > RemoteInteractive || (v149 = 1332, !_bittest(&v149, v258)) )
  {
    if ( v258 != Network )
      goto LABEL_809;
    if ( (unsigned int)(proto_buf_base->MessageType - 3) <= 2
      && SLOBYTE(proto_buf_base[1].Password.Length) < 0
      && proto_buf_base[1].LogonDomainName.Length == 24
      && proto_buf_base[1].UserName.Length >= 8u )
    {
      v198 = (int)hMem;
      if ( !hMem )
        goto LABEL_785;
      MsvpCalculateNtlm2SessionKeys(
        (PUCHAR)hMem + 172,
        (PUCHAR)&proto_buf_base[1],
        (PUCHAR)proto_buf_base[1].UserName.Buffer,
        (__int64)hMem + 232);
    }
    v198 = (int)hMem;
LABEL_785:
    NetworkProfile = NlpAllocateNetworkProfile(v286, (_DWORD)v297, v318, v198, v354);
    v24 = NetworkProfile;
    if ( NetworkProfile < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
        goto LABEL_737;
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        106,
        &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
        (unsigned int)NetworkProfile);
LABEL_789:
      v24 = NetworkProfile;
      goto LABEL_496;
    }
    if ( !hMem )
    {
LABEL_809:
      v21 = v256;
      v176 = 0;
      v179 = v261;
      goto LABEL_810;
    }
    NlpGetAccountNames((_DWORD)v264, (_DWORD)hMem, 0, (unsigned int)v323, (__int64)&v337, (__int64)v336, (__int64)v335);
    v199 = 2LL * v276;
    v200 = (char *)hMem + 64;
    v201 = ++v276;
    v392[2 * v199] = 3;
    *(_QWORD *)&v392[2 * v199 + 2] = v200;
    if ( v335[0] )
    {
      v202 = 2LL * v201++;
      v276 = v201;
      v392[2 * v202] = 8;
      *(_QWORD *)&v392[2 * v202 + 2] = v335;
    }
    if ( v336[0] )
    {
      v203 = 2LL * v201++;
      v276 = v201;
      v392[2 * v203] = 12;
      *(_QWORD *)&v392[2 * v203 + 2] = v336;
    }
    v204 = v201;
    v17 = LocallyUniqueId;
    LsaIAddNamesToLogonSession(LocallyUniqueId, v204, v392);
    LsaISetUserFlags(v17, *((unsigned int *)hMem + 42));
    v205 = (unsigned __int16)v323[0];
    if ( !LOWORD(v323[0]) )
    {
      *(struct _UNICODE_STRING *)v323 = DestinationString;
      v205 = DestinationString.Length;
    }
    v19->DownlevelName.MaximumLength = v205;
    v19->DownlevelName.Length = v205;
    v206 = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)(v205);
    v19->DownlevelName.Buffer = v206;
    if ( v206 )
    {
      memcpy_0(v206, v323[1], v205);
      v207 = v337;
      v19->DomainName.MaximumLength = v337;
      v19->DomainName.Length = v207;
      v208 = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)(v207);
      v19->DomainName.Buffer = v208;
      if ( v208 )
      {
        memcpy_0(v208, v338, (unsigned __int16)v207);
        v209 = _mm_cvtsi128_si32(*((__m128i *)hMem + 12));
        *(_OWORD *)Src = *((_OWORD *)hMem + 12);
        if ( !v209 )
          goto LABEL_803;
        v19->LogonServer.MaximumLength = v209;
        v19->LogonServer.Length = v209;
        v210 = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)(v209);
        v19->LogonServer.Buffer = v210;
        if ( v210 )
        {
          memcpy_0(v210, Src[1], v209);
LABEL_803:
          v211 = Sid;
          if ( !Sid )
          {
            Sid = (PSID)NlpMakeDomainRelativeSid(*((PSID *)hMem + 28));
            v211 = Sid;
            if ( !Sid )
            {
              v24 = -1073741801;
              NetworkProfile = -1073741801;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
              {
                goto LABEL_737;
              }
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 107, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
              goto LABEL_789;
            }
          }
          v19->UserSid = v211;
          Sid = 0;
          goto LABEL_809;
        }
      }
    }
    v24 = -1073741670;
    goto LABEL_684;
  }
  v361 = 0u;
  v362 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(LsaFunctions + 192))(v348) )
  {
    v24 = -1073741595;
LABEL_684:
    NetworkProfile = v24;
    goto LABEL_496;
  }
  if ( (v349 & 0x800) != 0 )
    *((_DWORD *)hMem + 42) |= 0x8000u;
  NlpGetAccountNames((_DWORD)v264, (_DWORD)hMem, 0, (unsigned int)&v303, (__int64)&v320, (__int64)v334, (__int64)v333);
  v153 = Sid;
  v154 = &v303;
  if ( (_WORD)v304 )
    v154 = (UNICODE_STRING *)&v304;
  v155 = &v320;
  if ( (_WORD)v301 )
    v155 = (struct _UNICODE_STRING *)&v301;
  if ( !Sid )
  {
    Sid = (PSID)NlpMakeDomainRelativeSid(*((PSID *)hMem + 28));
    v153 = Sid;
    if ( !Sid )
    {
      v24 = -1073741801;
      NetworkProfile = -1073741801;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 98, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
LABEL_706:
        v19 = v255;
        v21 = v256;
LABEL_707:
        v94 = v252;
        goto LABEL_859;
      }
      goto LABEL_737;
    }
  }
  v156 = v153;
  if ( v281 )
  {
    v252 = v290;
    v290 = 0;
    NetworkProfile = 0;
    v157 = v255;
    v284 = v295;
  }
  else
  {
    CredEncryptionTypeForUser = NlpGetCredEncryptionTypeForUser(v153, 0);
    v157 = v255;
    NetworkProfile = NlpMakePrimaryCredentialFromPasswordOrOwf(
                       (unsigned int)&v320,
                       (unsigned int)&v303,
                       0,
                       0,
                       (__int64)&v255->Password,
                       CredEncryptionTypeForUser,
                       (__int64)&v252,
                       (__int64)&v284);
    v24 = NetworkProfile;
    if ( NetworkProfile < 0 )
    {
      v19 = v157;
LABEL_738:
      v21 = v256;
      goto LABEL_739;
    }
  }
  v158 = 2LL * v276;
  v159 = (char *)hMem + 64;
  v160 = ++v276;
  v392[2 * v158] = 3;
  *(_QWORD *)&v392[2 * v158 + 2] = v159;
  if ( v333[0] )
  {
    v161 = 2LL * (unsigned int)v160;
    v160 = (unsigned int)(v160 + 1);
    v276 = v160;
    v392[2 * v161] = 8;
    *(_QWORD *)&v392[2 * v161 + 2] = v333;
  }
  if ( v334[0] )
  {
    v162 = 2LL * (unsigned int)v160;
    v160 = (unsigned int)(v160 + 1);
    v276 = v160;
    v392[2 * v162] = 12;
    *(_QWORD *)&v392[2 * v162 + 2] = v334;
  }
  LsaIAddNamesToLogonSession(v17, v160, v392);
  LsaISetUserFlags(v17, *((unsigned int *)hMem + 42));
  v163 = (char *)hMem;
  v164 = v361 - *((_QWORD *)hMem + 31);
  if ( (_QWORD)v361 == *((_QWORD *)hMem + 31) )
  {
    v164 = *((_QWORD *)&v361 + 1) - *((_QWORD *)hMem + 32);
    if ( *((_QWORD *)&v361 + 1) == *((_QWORD *)hMem + 32) )
      v164 = v362 - *((_QWORD *)hMem + 33);
  }
  if ( v164 )
  {
    v361 = *(_OWORD *)((char *)hMem + 248);
    v362 = *((_QWORD *)hMem + 33);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 99, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
      v163 = (char *)hMem;
    }
  }
  v165 = 0;
  v166 = *((_DWORD *)v163 + 42) & 4;
  if ( !v166 )
    v165 = v163 + 40;
  v167 = 0;
  if ( v166 )
  {
    v168 = 0;
  }
  else
  {
    v167 = v163 + 32;
    v168 = v163 + 24;
  }
  v169 = 0;
  if ( v166 )
  {
    v170 = 0;
  }
  else
  {
    v169 = v163 + 16;
    v170 = v163 + 8;
  }
  v248 = v165;
  v17 = LocallyUniqueId;
  NetworkProfile = LsaISetLogonInfo(
                     LocallyUniqueId,
                     &v361,
                     v163 + 80,
                     v163 + 96,
                     v163 + 112,
                     v163 + 128,
                     v170,
                     v169,
                     v168,
                     v167,
                     v248);
  v24 = NetworkProfile;
  if ( NetworkProfile < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        100,
        &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
        (unsigned int)NetworkProfile);
      goto LABEL_706;
    }
    goto LABEL_737;
  }
  v172 = v154->Length;
  v157->DownlevelName.Length = v154->Length;
  v157->DownlevelName.MaximumLength = v172;
  v173 = (wchar_t *)((__int64 (*)(void))qword_180066388)();
  v157->DownlevelName.Buffer = v173;
  if ( !v173
    || (memcpy_0(v173, v154->Buffer, v154->Length),
        v174 = v155->Length,
        v157->DomainName.Length = v155->Length,
        v157->DomainName.MaximumLength = v174,
        v175 = (wchar_t *)((__int64 (*)(void))qword_180066388)(),
        v176 = 0,
        (v157->DomainName.Buffer = v175) == 0) )
  {
    v24 = -1073741670;
    NetworkProfile = -1073741670;
LABEL_737:
    v19 = v255;
    goto LABEL_738;
  }
  memcpy_0(v175, v155->Buffer, v155->Length);
  v19 = v255;
  v177 = _mm_cvtsi128_si32(*((__m128i *)hMem + 12));
  *(_OWORD *)Src = *((_OWORD *)hMem + 12);
  if ( v177 )
  {
    v255->LogonServer.MaximumLength = v177;
    v19->LogonServer.Length = v177;
    v178 = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)(v177);
    v19->LogonServer.Buffer = v178;
    if ( !v178 )
    {
      v24 = -1073741670;
      NetworkProfile = -1073741670;
      goto LABEL_738;
    }
    memcpy_0(v178, Src[1], v177);
  }
  v261 = 1;
  v179 = 1;
  v180 = NlpBuildCacheEntry(&v367.Identity.LogonDomainName, 0, (__int64)&v296, (__int64)&Size);
  NetworkProfile = v180;
  if ( v180 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      101,
      &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
      (unsigned int)v180);
  }
  v19->UserSid = Sid;
  Sid = 0;
  v181 = RtlLengthSid(v156);
  v182 = v181;
  v183 = v320.Length + *((unsigned __int16 *)hMem + 96) + ((v181 + 1) & 0xFFFFFFFE) + v303.Length + 142;
  v184 = Size + ((v183 + 7) & 0xFFFFFFF8) + v183;
  v185 = ((__int64 (__fastcall *)(_QWORD))qword_1800664E0)(v184);
  v256 = v185;
  v21 = v185;
  if ( !v185 )
  {
    v24 = -1073741801;
    NetworkProfile = -1073741801;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 102, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids, v184);
      v94 = v252;
      v17 = LocallyUniqueId;
      goto LABEL_859;
    }
LABEL_752:
    v94 = v252;
    v17 = LocallyUniqueId;
    goto LABEL_860;
  }
  *(_DWORD *)(v185 + 40) = 1296847950;
  v186 = (void *)((v185 + 143) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_DWORD *)(v185 + 44) = *(_DWORD *)(&v264[1].MaximumLength + 1);
  v187 = v263;
  *(_DWORD *)(v21 + 48) = v264[1].Buffer;
  *(_DWORD *)(v21 + 120) = v187;
  *(_DWORD *)(v21 + 56) = v258;
  NetworkProfile = RtlCopySid(v182, v186, v19->UserSid);
  v24 = NetworkProfile;
  if ( NetworkProfile < 0 )
    goto LABEL_752;
  *(_QWORD *)(v21 + 64) = v186;
  Src[0] = (void *)(((unsigned __int64)v186 + v182 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  NlpPutString(v21 + 72, &v303, Src);
  NlpPutString(v21 + 88, &v320, Src);
  NlpPutString(v21 + 104, (char *)hMem + 192, Src);
  v188 = Size;
  v189 = v296;
  v190 = (void *)(((unsigned __int64)Src[0] + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_DWORD *)(v21 + 52) = _InterlockedIncrement(&NlpEnumerationHandle);
  memcpy_0(v190, v189, v188);
  *(_QWORD *)(v21 + 128) = v190;
  *(_DWORD *)(v21 + 124) = v188;
  RtlAcquireResourceShared(&NlpActiveLogonLock, 1u);
  v17 = LocallyUniqueId;
  if ( NlpFindActiveLogon(LocallyUniqueId) )
  {
    RtlReleaseResource(&NlpActiveLogonLock);
    v24 = -1073741563;
    NetworkProfile = -1073741563;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
      goto LABEL_739;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 103, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
    goto LABEL_707;
  }
  RtlConvertSharedToExclusive(&NlpActiveLogonLock);
  v191 = NlpActiveLogonTable;
  LOBYTE(v192) = 0;
  if ( !NlpActiveLogonTable )
    goto LABEL_766;
  while ( *(_QWORD *)(v21 + 44) >= *(__int64 *)((char *)v191[1].Children + 4) )
  {
    v193 = v191->Children[1];
    if ( !v193 )
    {
      LOBYTE(v192) = 1;
      goto LABEL_766;
    }
LABEL_764:
    v191 = v193;
  }
  v193 = v191->Children[0];
  if ( v191->Children[0] )
    goto LABEL_764;
  LOBYTE(v192) = 0;
LABEL_766:
  RtlAvlInsertNodeEx(&NlpActiveLogonTable, v191, v192, v21 + 16);
  v194 = NlpActiveLogonListAnchor;
  if ( *(__int64 **)(NlpActiveLogonListAnchor + 8) != &NlpActiveLogonListAnchor )
    __fastfail(3u);
  *(_QWORD *)(v21 + 8) = &NlpActiveLogonListAnchor;
  *(_QWORD *)v21 = v194;
  *(_QWORD *)(v194 + 8) = v21;
  NlpActiveLogonListAnchor = v21;
  RtlReleaseResource(&NlpActiveLogonLock);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0 )
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 104, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
  v270 = 1;
  active = NlpCountActiveLogon(&v320, &v303);
  if ( *((_WORD *)hMem + 72) < active )
    *((_WORD *)hMem + 72) = active;
  NetworkProfile = NlpAllocateInteractiveProfile(v286, v297, v318);
  v24 = NetworkProfile;
  if ( NetworkProfile >= 0 )
  {
LABEL_810:
    v212 = v273;
    if ( v273 )
    {
      if ( v273 == 3 )
      {
        v213 = (_QWORD *)v314;
        NetworkProfile = NlpMakeTokenInformationV3(hMem, v306, v285, v314);
        v24 = NetworkProfile;
        if ( NetworkProfile < 0 )
        {
          v196 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
            goto LABEL_739;
          v197 = 108;
LABEL_776:
          WPP_SF_D(v196[2], v197, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids, (unsigned int)v24);
          goto LABEL_707;
        }
        v214 = LsaICheckProtectedUserByTokenInfo(*v213, (unsigned int)v258, &v267);
        v176 = 0;
        NetworkProfile = v214;
        v24 = v214;
        if ( v214 < 0 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
            goto LABEL_739;
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            109,
            &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
            (unsigned int)v214);
          goto LABEL_707;
        }
      }
    }
    else
    {
      v215 = ((__int64 (__fastcall *)(__int64))qword_180066388)(16);
      if ( !v215 )
      {
        v24 = -1073741801;
        NetworkProfile = -1073741801;
        goto LABEL_739;
      }
      v216 = (_QWORD *)v314;
      *(_DWORD *)v215 = -1;
      *(_QWORD *)(v215 + 8) = 0;
      *(_DWORD *)(v215 + 4) = 0x7FFFFFFF;
      *v216 = v215;
    }
    v37 = v179 == 0;
    v94 = v252;
    if ( !v37 )
    {
      if ( !*((_BYTE *)v252 + 44) && *((_BYTE *)v252 + 41) )
      {
        CredentialKey = MsvpGenerateCredentialKey(v252, v19->UserSid, v23);
        v95 = v251;
        v24 = CredentialKey;
        v25 = v249;
        NetworkProfile = CredentialKey;
        if ( CredentialKey < 0 )
          goto LABEL_512;
        v176 = 0;
      }
      if ( v281 )
      {
        SupplementalTbalCredentials = MsvpMakeSupplementalTbalCredentials(v94, &v316, &v298);
        v95 = v251;
        v24 = SupplementalTbalCredentials;
        v25 = v249;
        NetworkProfile = SupplementalTbalCredentials;
        if ( SupplementalTbalCredentials < 0 )
          goto LABEL_512;
        v176 = 0;
      }
      if ( v267 )
      {
        v219 = 0;
        v363 = 0u;
        v364 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0 )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 110, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
        }
        v19->Flags |= 0x800u;
        *(_DWORD *)(v21 + 120) |= 0x20u;
        LsaIEventWritePackageNotCacheLogonUser(&v331, &v19->DownlevelName, &v19->DomainName, 1);
        v221 = v258;
        if ( v258 != NetworkCleartext )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0 )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 111, &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids);
            v221 = v258;
          }
          LOBYTE(v220) = 1;
          v222 = NlpDeleteCacheEntry(-1073741710, 1, v221, v220, &v367.Identity.LogonDomainName);
          if ( v222 < 0
            && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 2) != 0 )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              112,
              &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
              (unsigned int)v222);
          }
        }
        v223 = *((_BYTE *)v94 + 44);
        if ( v223 )
        {
          v219 = *(_DWORD *)((char *)v94 + 70);
          v176 = *((_DWORD *)v94 + 12);
          v224 = *(_OWORD *)((char *)v94 + 54);
          v364 = v219;
          v363 = v224;
        }
        else
        {
          v224 = v363;
        }
        v225 = *((_QWORD *)v94 + 4);
        memset((char *)v94 + 32, 0, 0x160u);
        v212 = v273;
        *((_QWORD *)v94 + 4) = v225;
        if ( v223 )
        {
          *((_DWORD *)v94 + 12) = v176;
          *(_OWORD *)((char *)v94 + 54) = v224;
          *((_BYTE *)v94 + 44) = 1;
          *(_DWORD *)((char *)v94 + 70) = v219;
        }
        v17 = LocallyUniqueId;
      }
      NetworkProfile = NlpAddPrimaryCredential(v17, v94, v284);
      v24 = NetworkProfile;
      if ( NetworkProfile < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 )
          goto LABEL_860;
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          113,
          &WPP_51f1a80c68843933c45af01c0eaf2bf9_Traceguids,
          (unsigned int)NetworkProfile);
        goto LABEL_859;
      }
      v271 = 1;
    }
    v24 = 0;
    v226 = v312;
    v37 = v281 == 0;
    v95 = v251;
    *v327 = v212;
    v227 = v298;
    v298 = 0;
    NetworkProfile = 0;
    v25 = v249;
    *v226 = v227;
    if ( v37 )
      goto LABEL_512;
    if ( !(*(unsigned __int8 (__fastcall **)(char *, PUNICODE_STRING))(LsaFunctions + 192))(v350, v95) )
    {
      v24 = -1073741595;
      NetworkProfile = -1073741595;
      goto LABEL_860;
    }
    if ( (v351 & 0x800) != 0 )
      *v289 = -1073741232;
LABEL_859:
    v24 = NetworkProfile;
    goto LABEL_860;
  }
  v196 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
  {
    v197 = 105;
    goto LABEL_776;
  }
LABEL_739:
  v94 = v252;
LABEL_860:
  v25 = v249;
LABEL_511:
  v95 = v251;
LABEL_512:
  if ( v95 )
  {
    memset(&v95[2], 0, 0x160u);
    (*(void (__fastcall **)(PUNICODE_STRING))(LsaFunctions + 48))(v95);
    v24 = NetworkProfile;
    v95 = 0;
    v251 = 0;
  }
  v115 = v296;
  if ( v296 )
  {
    memset_0(v296, 0, (unsigned int)Size);
    ((void (__fastcall *)(void *))qword_1800664E8)(v115);
    v24 = NetworkProfile;
    v296 = 0;
  }
  v114 = v257;
  if ( v257 )
  {
    if ( v25 )
    {
      v25 = 0;
      if ( v266 )
      {
        if ( v24 < 0 )
        {
          if ( v305 )
          {
            (*(void (**)(void))(LsaFunctions + 392))();
            v304 = 0;
            v305 = 0;
          }
          if ( v302 )
          {
            (*(void (**)(void))(LsaFunctions + 392))();
            v301 = 0;
            v302 = 0;
          }
          v105 = hMem;
          if ( hMem )
          {
            LocalFree(hMem);
            hMem = 0;
          }
          v58 = v260;
          v249 = 0;
          goto LABEL_527;
        }
      }
    }
  }
  (*(void (__fastcall **)(wchar_t *))(LsaFunctions + 392))(v311.Buffer);
  (*(void (__fastcall **)(wchar_t *))(LsaFunctions + 392))(v310.Buffer);
  if ( String.Length && String.Buffer )
    RtlEraseUnicodeString(&String);
  (*(void (__fastcall **)(wchar_t *))(LsaFunctions + 392))(String.Buffer);
  if ( v268 )
  {
    proto_buf_base->Password = v325;
    LsaIFree_LSAPR_CR_CIPHER_VALUE(v293);
  }
  if ( NetworkProfile >= 0 )
    goto LABEL_891;
  if ( v269 )
    ((void (__fastcall *)(LUID *))qword_180066368)(v17);
  if ( v21 )
  {
    if ( v270 )
    {
      LsaApLogonTerminated(v17);
    }
    else
    {
      if ( v271 )
        NlpDeletePrimaryCredential(v17);
      ((void (__fastcall *)(__int64))qword_1800664E8)(v21);
    }
  }
  if ( !v272 )
  {
    v228 = v297;
    if ( *v297 )
    {
      if ( v286 == -1 )
        ((void (*)(void))qword_180066390)();
      else
        ((void (__fastcall *)(__int64, _QWORD))qword_1800663A0)(v286, *v297);
      *v228 = 0;
    }
  }
  if ( v19->DownlevelName.Buffer )
    ((void (*)(void))qword_180066390)();
  if ( v19->DomainName.Buffer )
    ((void (*)(void))qword_180066390)();
  v229 = v19->Password.Buffer;
  if ( v229 )
  {
    memset_0(v229, 0, v19->Password.Length);
    ((void (__fastcall *)(wchar_t *))qword_180066390)(v19->Password.Buffer);
  }
  if ( v19->LogonServer.Buffer )
    ((void (*)(void))qword_180066390)();
  memset_0(v19, 0, sizeof(struct _SECPKG_PRIMARY_CRED));
  if ( NetworkProfile >= 0 )
  {
LABEL_891:
    if ( v273 )
    {
      if ( v258 != Network || *((_WORD *)hMem + 24) )
        DestinationString = (struct _UNICODE_STRING)*((_OWORD *)hMem + 3);
      DomainName1 = (struct _UNICODE_STRING)*((_OWORD *)hMem + 13);
    }
  }
  v230 = ((__int64 (__fastcall *)(__int64))qword_180066388)(16);
  v231 = (PUNICODE_STRING *)v309;
  *v309 = v230;
  if ( v230 )
  {
    (*v231)->Buffer = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)((unsigned int)DestinationString.Length + 2);
    v232 = *v231;
    if ( (*v231)->Buffer )
    {
      v232->MaximumLength = DestinationString.Length + 2;
      RtlCopyUnicodeString(*v231, &DestinationString);
    }
    else if ( NetworkProfile < 0 )
    {
      RtlInitUnicodeString(v232, 0);
    }
    else
    {
      NetworkProfile = -1073741801;
    }
  }
  else
  {
    v233 = NetworkProfile;
    if ( NetworkProfile >= 0 )
      v233 = -1073741801;
    NetworkProfile = v233;
  }
  v234 = ((__int64 (__fastcall *)(__int64))qword_180066388)(16);
  v235 = (PUNICODE_STRING *)v308;
  *v308 = v234;
  if ( v234 )
  {
    (*v235)->Buffer = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)((unsigned int)DomainName1.Length + 2);
    v236 = *v235;
    if ( (*v235)->Buffer )
    {
      v236->MaximumLength = DomainName1.Length + 2;
      RtlCopyUnicodeString(*v235, &DomainName1);
      goto LABEL_911;
    }
    if ( NetworkProfile < 0 )
    {
      RtlInitUnicodeString(v236, 0);
LABEL_911:
      v237 = (unsigned int)NetworkProfile;
    }
    else
    {
      v237 = 3221225495LL;
      NetworkProfile = -1073741801;
    }
  }
  else
  {
    v237 = (unsigned int)NetworkProfile;
    if ( NetworkProfile >= 0 )
      v237 = 3221225495LL;
    NetworkProfile = v237;
  }
  v238 = v324;
  v239 = SourceString;
  *v324 = 0;
  if ( v239 )
  {
    v240 = ((__int64 (__fastcall *)(__int64))qword_180066388)(16);
    *v238 = (PUNICODE_STRING)v240;
    if ( v240 )
    {
      (*v238)->Buffer = (wchar_t *)((__int64 (__fastcall *)(_QWORD))qword_180066388)((unsigned int)v239->Length + 2);
      v241 = *v238;
      if ( (*v238)->Buffer )
      {
        v241->MaximumLength = v239->Length + 2;
        RtlCopyUnicodeString(*v238, v239);
        goto LABEL_922;
      }
      if ( NetworkProfile >= 0 )
      {
        v237 = 3221225495LL;
        NetworkProfile = -1073741801;
        goto LABEL_939;
      }
      RtlInitUnicodeString(v241, 0);
LABEL_922:
      v237 = (unsigned int)NetworkProfile;
    }
    else
    {
      v237 = (unsigned int)NetworkProfile;
      if ( NetworkProfile >= 0 )
        v237 = 3221225495LL;
      NetworkProfile = v237;
    }
  }
  if ( (_DWORD)v237 != -1073741724 && (_DWORD)v237 != -1073741718 )
  {
    if ( (_DWORD)v237 == -1073741714 )
    {
      *v289 = -1073741714;
      goto LABEL_939;
    }
    if ( (int)v237 <= -1073741714 )
      goto LABEL_939;
    if ( (int)v237 <= -1073741710 )
      goto LABEL_935;
    if ( (_DWORD)v237 != -1073741413 )
    {
      if ( (_DWORD)v237 != -1073741062 )
      {
        if ( (_DWORD)v237 == -1073740776 )
        {
          v237 = 2148074242LL;
          *v289 = -1073740776;
          goto LABEL_938;
        }
        goto LABEL_939;
      }
LABEL_935:
      NetworkProfile = -1073741714;
      *v289 = v237;
      v237 = 3221225582LL;
      goto LABEL_939;
    }
  }
  *v289 = v237;
  v237 = 3221225581LL;
LABEL_938:
  NetworkProfile = v237;
LABEL_939:
  if ( v94 )
  {
    memset((char *)v94 + 32, 0, 0x160u);
    ((void (__fastcall *)(struct _MSV1_0_PRIMARY_CREDENTIAL *))qword_180066390)(v94);
    v237 = (unsigned int)NetworkProfile;
  }
  if ( hMem )
  {
    LocalFree(hMem);
    v237 = (unsigned int)NetworkProfile;
  }
  if ( Sid )
  {
    ((void (__fastcall *)(PSID))qword_180066390)(Sid);
    v237 = (unsigned int)NetworkProfile;
  }
  v16 = v290;
LABEL_947:
  NtlmTelemetry::LogonUserStop((NtlmTelemetry *)v237, v258, (enum _SECURITY_LOGON_TYPE)v264, v26);
  memset(&v387[32], 0, 0x160u);
  memset(&v388[32], 0, 0x160u);
  if ( v16 )
  {
    memset((char *)v16 + 32, 0, 0x160u);
    ((void (__fastcall *)(struct _MSV1_0_PRIMARY_CREDENTIAL *, __int64))qword_180066390)(v16, 352);
  }
  v242 = v298;
  if ( v298 )
  {
    memset(v298, 0, v316);
    ((void (__fastcall *)(unsigned __int8 *))qword_180066390)(v242);
  }
  if ( NtlmGlobalEventTraceFlag )
  {
    v373 = 1179648;
    v326 = 0u;
    v372 = NtlmLogonGuid;
    v370[0] = 144;
    v375 = 4;
    p_NetworkProfile = &NetworkProfile;
    v377 = 4;
    v243 = *v231;
    v376 = &v258;
    v378 = v243;
    v371 = 2;
    v379 = 2;
    v380 = v243->Buffer;
    v381 = v243->Length;
    v244 = *(__m128i *)*v235;
    v383 = 2;
    v382 = &v326;
    v385 = v244.m128i_u16[0];
    v326 = v244;
    v384 = _mm_srli_si128(v244, 8).m128i_u64[0];
    EtwLogTraceEvent(NtlmGlobalTraceLoggerHandle, v370);
  }
  if ( HIDWORD(Size) )
    (*(void (__fastcall **)(struct _MSV1_0_INTERACTIVE_LOGON *))(LsaFunctions + 392))(v291);
  if ( v299 )
    LocalFree(v299);
  if ( v305 )
    (*(void (**)(void))(LsaFunctions + 392))();
  if ( v302 )
    (*(void (**)(void))(LsaFunctions + 392))();
  if ( v321.Buffer )
    ((void (*)(void))qword_1800664E8)();
  v245 = *((_QWORD *)&v315 + 1);
  if ( *((_QWORD *)&v315 + 1) )
  {
    memset(*((void **)&v315 + 1), 0, (unsigned __int16)v315);
    (*(void (__fastcall **)(__int64))(LsaFunctions + 392))(v245);
  }
  v246 = v317;
  if ( v317 )
  {
    memset(v317, 0, v294);
    ((void (__fastcall *)(WCHAR *))qword_1800664E8)(v246);
  }
  return (unsigned int)NetworkProfile;
}