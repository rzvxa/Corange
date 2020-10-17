/**
*** :: Corange ::
***
***   Pure and Simple game engine written in C
***
***   Uses SDL as a bottom layer and OpenGL for rendering
***   Provides asset, UI and entity management.
***   As well as deferred and forward renderers.
***   And a host of small demos.
***
***   Suggestions and contributions welcome:
***
***     Daniel Holden | contact@theorangeduck.com
***
***     https://github.com/orangeduck/Corange
***
**/

#ifndef corange_h
#define corange_h

/* Core engine modules */

#include "caudio.h"
#include "cengine.h"
#include "cgraphics.h"
#include "cjoystick.h"
#include "cnet.h"
#include "cphysics.h"

/* Corange Functions */

void corange_init(const char *core_assets_path);
void corange_finish();

/* Entities */

#include "centity.h"

#include "entities/animated_object.h"
#include "entities/camera.h"
#include "entities/instance_object.h"
#include "entities/landscape.h"
#include "entities/light.h"
#include "entities/particles.h"
#include "entities/physics_object.h"
#include "entities/static_object.h"

/* Assets */

#include "casset.h"

#include "assets/animation.h"
#include "assets/cmesh.h"
#include "assets/config.h"
#include "assets/effect.h"
#include "assets/font.h"
#include "assets/image.h"
#include "assets/lang.h"
#include "assets/material.h"
#include "assets/music.h"
#include "assets/renderable.h"
#include "assets/script.h"
#include "assets/shader.h"
#include "assets/skeleton.h"
#include "assets/sound.h"
#include "assets/terrain.h"
#include "assets/texture.h"

/* UI */

#include "cui.h"

#include "ui/ui_browser.h"
#include "ui/ui_button.h"
#include "ui/ui_dialog.h"
#include "ui/ui_listbox.h"
#include "ui/ui_option.h"
#include "ui/ui_rectangle.h"
#include "ui/ui_slider.h"
#include "ui/ui_spinner.h"
#include "ui/ui_style.h"
#include "ui/ui_text.h"
#include "ui/ui_textbox.h"
#include "ui/ui_toast.h"

/* Rendering */

#include "rendering/renderer.h"
#include "rendering/sky.h"

/* Data Structures */

#include "data/dict.h"
#include "data/int_list.h"
#include "data/list.h"
#include "data/randf.h"
#include "data/spline.h"
#include "data/vertex_hashtable.h"
#include "data/vertex_list.h"

#endif
