
/* WARNING: Removing unreachable block (ram,0x36044b85) */

longlong FUN_36044ac0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  char *pcVar7;
  uint uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  int local_28;
  undefined4 *local_24;
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  BVar6 = QueryPerformanceFrequency(&local_18);
  if (BVar6 == 0) {
    pcVar7 = Translate(s_ETRSPerformanceTimer_is_not_avai_36227648,4);
    CPrintF(pcVar7);
    return 1;
  }
  local_28 = 0;
  do {
    local_24 = &DAT_362bf120;
    do {
      QueryPerformanceCounter(&local_20);
      do {
        uVar4 = local_20.s.HighPart;
        uVar2 = local_20.s.LowPart;
        QueryPerformanceCounter(&local_20);
        uVar5 = local_20.s.HighPart;
        uVar3 = local_20.s.LowPart;
        if (uVar2 != local_20.s.LowPart) break;
      } while (uVar4 == local_20.s.HighPart);
      uVar12 = rdtsc();
      local_4 = (int)((ulonglong)uVar12 >> 0x20);
      local_8 = (uint)uVar12;
      lVar11 = CONCAT44(local_20.s.HighPart,local_20.s.LowPart);
      lVar10 = __alldiv(local_18.s.LowPart,local_18.s.HighPart,4,0);
      do {
        QueryPerformanceCounter(&local_20);
      } while (CONCAT44(local_20.s.HighPart,local_20.s.LowPart) < lVar10 + lVar11);
      uVar12 = rdtsc();
      local_c = (int)((ulonglong)uVar12 >> 0x20);
      local_10 = (uint)uVar12;
      lVar11 = __allmul(local_10 - local_8,(local_c - local_4) - (uint)(local_10 < local_8),
                        local_18.s.LowPart,local_18.s.HighPart);
      uVar12 = __alldiv((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_20.s.LowPart - uVar3,
                        (local_20.s.HighPart - uVar5) - (uint)(local_20.s.LowPart < (uint)uVar3));
      uVar12 = __alldiv((uint)uVar12,(uint)((ulonglong)uVar12 >> 0x20),1000000,0);
      *local_24 = (int)uVar12;
      local_24 = local_24 + 1;
    } while ((int)local_24 < 0x362bf130);
    iVar1 = (int)DAT_362bf120 / 200;
    uVar8 = (int)(DAT_362bf120 - DAT_362bf124) >> 0x1f;
    cVar9 = iVar1 < (int)((DAT_362bf120 - DAT_362bf124 ^ uVar8) - uVar8);
    uVar8 = (int)(DAT_362bf120 - DAT_362bf128) >> 0x1f;
    if (iVar1 < (int)((DAT_362bf120 - DAT_362bf128 ^ uVar8) - uVar8)) {
      cVar9 = cVar9 + '\x01';
    }
    uVar8 = (int)(DAT_362bf120 - DAT_362bf12c) >> 0x1f;
    if (iVar1 < (int)((DAT_362bf120 - DAT_362bf12c ^ uVar8) - uVar8)) {
      cVar9 = cVar9 + '\x01';
    }
    if (cVar9 == '\0') break;
    Sleep(500);
    local_28 = local_28 + 1;
  } while (local_28 < 5);
  if (local_28 == 5) {
    pcVar7 = Translate(s_ETRSPerformanceTimer_is_not_vail_36227670,4);
    CPrintF(pcVar7);
  }
  lVar11 = __allmul(DAT_362bf120,(int)DAT_362bf120 >> 0x1f,1000000,0);
  return lVar11;
}

