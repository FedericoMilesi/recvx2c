# Cleanup docs

## Removed types

| Type | Reason | Replacement |
| --- | --- | --- |
| SDE_DATA_TYPE | Found on Katana | `<katana>/sg_sd.h` |
| sceVu0FMATRIX | Found on SCE | `<sce>/ee/include/libvu0.h` |
| NJS_POINT3 | Found on Katana | `<katana>/ninjastr.h` | 
| NJS_MATRIX | Found on Katana | `<katana>/ninjadef.h` |
| sceMcIconSys | Found on SCE | `<sce>/ee/include/libmc.h` |
| PDS_PERIPHERAL | Found on Katana | `<katana>/sg_pad.h` - `<katana>/ninjapad.h` |
| SYS_RTC_DATE | Found on Katana | `<katana>/sg_syrtc.h` |
| sceCdCLOCK | Found on SCE | `<sce>/common/include/libcdvd.h` |
| SYS_BT_SYSTEMID | Found on Katana | `<katana>/sg_sybt.h` |
| SYE_CBL_TAG | Found on Katana | `<katana>/sg_sycbl.h` |
| sceGsTex0 | Found on SCE | `<sce>/ee/include/eestruct.h` |
| sceGsTex1 | Found on SCE | `<sce>/ee/include/eestruct.h` |
| NJS_POLYGON_VTX | Found on Katana | `<katana>/ninjastr.h` |
| NJS_TEXTURE_VTX | Found on Katana | `<katana>/ninjastr.h` |
| NJS_POINT2 | Found on Katana | `<katana>/ninjastr.h` |
| NJS_PLANE NJS_LINE | Found on Katana | `<katana>/ninjastr.h` |
| NJS_CLIP_BUF | Found on Katana | `<katana>/ninjastr.h` |
| NJS_VERTEX_BUF | Found on Katana | `<katana>/ninjastr.h` |
| BUS_TIME | Found on Katana | `<katana>/sg_bup.h` |
| BUS_FILEINFO | Found on Katana | `<katana>/sg_bup.h` |
| NJS_CAPSULE | Found on Katana | `<katana>/ninjastr.h` |
| sceMcStDateTime | Found on SCE | `<sce>/ee/include/libmc.h` |
| sceMcTblGetDir | Found on SCE | `<sce>/ee/include/libmc.h` |
| BUS_DISKINFO | Found on Katana | `<katana>/sg_bup.h` |
| PDS_VIBPARAM | Found on Katana | `<katana>/sg_pdvib.h` |
| GDS_DCF | Found on Katana | `<katana>/sg_gd.h` |