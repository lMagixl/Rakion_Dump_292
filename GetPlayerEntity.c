
/* public: static class CEntity * __cdecl CEntity::GetPlayerEntity(long) */

CEntity * __cdecl CEntity::GetPlayerEntity(long param_1)

{
                    /* 0x126200  2048  ?GetPlayerEntity@CEntity@@SAPAV1@J@Z */
  if (*(int *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + param_1 * 0x100) == 0) {
    return (CEntity *)0x0;
  }
  return *(CEntity **)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + param_1 * 0x100 + 4);
}

