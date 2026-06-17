
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl shaHasHaze(class AABBox<float,3> &) */

int __cdecl shaHasHaze(AABBox<float,3> *param_1)

{
                    /* 0x8f090  4357  ?shaHasHaze@@YAHAAV?$AABBox@M$02@@@Z */
  if (((((DAT_362c9998 * *(float *)param_1 +
          DAT_362c999c * *(float *)(param_1 + 4) + DAT_362c99a0 * *(float *)(param_1 + 8) +
         DAT_362c9770) * DAT_362c3b58 <= _DAT_362c3b50) &&
       ((DAT_362c9998 * *(float *)param_1 +
         DAT_362c999c * *(float *)(param_1 + 4) + DAT_362c99a0 * *(float *)(param_1 + 0x14) +
        DAT_362c9770) * DAT_362c3b58 <= _DAT_362c3b50)) &&
      ((DAT_362c9998 * *(float *)param_1 +
        DAT_362c999c * *(float *)(param_1 + 0x10) + DAT_362c99a0 * *(float *)(param_1 + 8) +
       DAT_362c9770) * DAT_362c3b58 <= _DAT_362c3b50)) &&
     (param_1 = (AABBox<float,3> *)
                ((DAT_362c9998 * *(float *)param_1 +
                  DAT_362c999c * *(float *)(param_1 + 0x10) +
                  DAT_362c99a0 * *(float *)(param_1 + 0x14) + DAT_362c9770) * DAT_362c3b58),
     (float)param_1 <= _DAT_362c3b50)) {
    FUN_3608ec80((float *)&param_1);
    if ((float)param_1 <= _DAT_362c3b50) {
      FUN_3608ec80((float *)&param_1);
      if ((float)param_1 <= _DAT_362c3b50) {
        FUN_3608ec80((float *)&param_1);
        if ((float)param_1 <= _DAT_362c3b50) {
          FUN_3608ec80((float *)&param_1);
          if ((float)param_1 <= _DAT_362c3b50) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

