
/* __int64 __cdecl GetDiskFreeSpaceA(class CTString const &) */

__int64 __cdecl GetDiskFreeSpaceA(CTString *param_1)

{
  ULARGE_INTEGER local_10;
  ULARGE_INTEGER local_8;
  
                    /* 0x3fc10  1839  ?GetDiskFreeSpaceA@@YA_JABVCTString@@@Z */
  local_10.s.LowPart = 0;
  local_10.s.HighPart = 0;
  GetDiskFreeSpaceExA(*(LPCSTR *)param_1,&local_10,&local_8,(PULARGE_INTEGER)0x0);
  return CONCAT44(local_10.s.HighPart,local_10.s.LowPart);
}

