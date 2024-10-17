//
//  Generated file. Do not edit.
//
#include <flutter/flutter_aurora.h>
#include <package_info_plus_aurora/package_info_plus_aurora_plugin.h>
#include <url_launcher_aurora/url_launcher_aurora_plugin.h>
#include <video_player_aurora/video_player_aurora_plugin.h>

#include "generated_plugin_registrant.h"

namespace aurora {
void RegisterPlugins() {
  flutter::PluginRegistrar* registrar = GetPluginRegistrar();
  PackageInfoPlusAuroraPlugin::RegisterWithRegistrar(registrar);
  UrlLauncherAuroraPlugin::RegisterWithRegistrar(registrar);
  VideoPlayerAuroraPlugin::RegisterWithRegistrar(registrar);
}
}
