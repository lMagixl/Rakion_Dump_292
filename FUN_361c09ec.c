
undefined4 FUN_361c09ec(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  char *_Format;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if ((int)param_1 < -0x7789f799) {
    if (param_1 == (char *)0x88760866) {
      param_1 = s_D3DERR_NOTFOUND_36248b0c;
    }
    else if ((int)param_1 < -0x7789f7e3) {
      if (param_1 == (char *)0x8876081c) {
        param_1 = s_D3DERR_UNSUPPORTEDALPHAARG_36248bf8;
      }
      else if ((int)param_1 < -0x7789f7e7) {
        if (param_1 == (char *)0x88760818) {
          param_1 = s_D3DERR_WRONGTEXTUREFORMAT_36248c78;
        }
        else if (param_1 == (char *)0x80004001) {
          param_1 = s_E_NOTIMPL_36248c94;
        }
        else if (param_1 == (char *)0x80004005) {
          param_1 = s_E_FAIL_36248ca0;
        }
        else if (param_1 == (char *)0x8007000e) {
          param_1 = s_E_OUTOFMEMORY_36248ca8;
        }
        else {
          if (param_1 != (char *)0x8876017c) goto LAB_361c0c37;
          param_1 = s_D3DERR_OUTOFVIDEOMEMORY_36248cb8;
        }
      }
      else if (param_1 == (char *)0x88760819) {
        param_1 = s_D3DERR_UNSUPPORTEDCOLOROPERATION_36248c14;
      }
      else if (param_1 == (char *)0x8876081a) {
        param_1 = s_D3DERR_UNSUPPORTEDCOLORARG_36248c38;
      }
      else {
        if (param_1 != (char *)0x8876081b) {
LAB_361c0c37:
          _Format = s_6Unrecognized_error__0x_0_8x_36248993 + 1;
          goto LAB_361c0c3d;
        }
        param_1 = s_D3DERR_UNSUPPORTEDALPHAOPERATION_36248c54;
      }
    }
    else if (param_1 == (char *)0x8876081d) {
      param_1 = s_D3DERR_TOOMANYOPERATIONS_36248b1c;
    }
    else if (param_1 == (char *)0x8876081e) {
      param_1 = s_D3DERR_CONFLICTINGTEXTUREFILTER_36248b38;
    }
    else if (param_1 == (char *)0x8876081f) {
      param_1 = s_D3DERR_UNSUPPORTEDFACTORVALUE_36248b58;
    }
    else if (param_1 == (char *)0x88760821) {
      param_1 = s_D3DERR_CONFLICTINGRENDERSTATE_36248b78;
    }
    else if (param_1 == (char *)0x88760822) {
      param_1 = s_D3DERR_UNSUPPORTEDTEXTUREFILTER_36248b98;
    }
    else if (param_1 == (char *)0x88760826) {
      param_1 = s_D3DERR_CONFLICTINGTEXTUREPALETTE_36248bb8;
    }
    else {
      if (param_1 != (char *)0x88760827) goto LAB_361c0c37;
      param_1 = s_D3DERR_DRIVERINTERNALERROR_36248bdc;
    }
  }
  else if ((int)param_1 < -0x7789f4ab) {
    if (param_1 == (char *)0x88760b54) {
      param_1 = s_D3DXERR_CANNOTMODIFYINDEXBUFFER_36248a54;
    }
    else if (param_1 == (char *)0x88760867) {
      param_1 = s_D3DERR_MOREDATA_36248a74;
    }
    else if (param_1 == (char *)0x88760868) {
      param_1 = s_D3DERR_DEVICELOST_36248a84;
    }
    else if (param_1 == (char *)0x88760869) {
      param_1 = s_D3DERR_DEVICENOTRESET_36248a98;
    }
    else if (param_1 == (char *)0x8876086a) {
      param_1 = s_D3DERR_NOTAVAILABLE_36248ab0;
    }
    else if (param_1 == (char *)0x8876086b) {
      param_1 = s_D3DERR_INVALIDDEVICE_36248ac4;
    }
    else if (param_1 == (char *)0x8876086c) {
      param_1 = s_D3DERR_INVALIDCALL_36248adc;
    }
    else {
      if (param_1 != (char *)0x8876086d) goto LAB_361c0c37;
      param_1 = s_D3DERR_DRIVERINVALIDCALL_36248af0;
    }
  }
  else if (param_1 == (char *)0x88760b55) {
    param_1 = s_D3DXERR_INVALIDMESH_362489b4;
  }
  else if (param_1 == (char *)0x88760b56) {
    param_1 = s_D3DXERR_CANNOTATTRSORT_362489c8;
  }
  else if (param_1 == (char *)0x88760b57) {
    param_1 = s_D3DXERR_SKINNINGNOTSUPPORTED_362489e0;
  }
  else if (param_1 == (char *)0x88760b58) {
    param_1 = s_D3DXERR_TOOMANYINFLUENCES_36248a00;
  }
  else if (param_1 == (char *)0x88760b59) {
    param_1 = s_D3DXERR_INVALIDDATA_36248a1c;
  }
  else if (param_1 == (char *)0x88760b5a) {
    param_1 = s_D3DXERR_LOADEDMESHASNODATA_36248a30;
  }
  else {
    if (param_1 != (char *)0x0) goto LAB_361c0c37;
    param_1 = &DAT_36248a4c;
  }
  _Format = &DAT_362489b0;
LAB_361c0c3d:
  iVar1 = _snprintf(param_2,param_3,_Format,param_1);
  if ((iVar1 < 0) && (param_3 != 0)) {
    param_2[param_3 - 1] = '\0';
  }
  return 0;
}

