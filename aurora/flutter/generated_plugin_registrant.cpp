//
//  Generated file. Do not edit.
//

// clang-format off

#include <flutter/application.h>
#include <package_info_plus_aurora/package_info_plus_aurora_plugin.h>
#include <url_launcher_aurora/url_launcher_aurora_plugin.h>
#include <video_player_aurora/video_player_aurora_plugin.h>

#include "generated_plugin_registrant.h"

void RegisterPlugins() {
    Application::RegisterPlugins({
        std::make_shared<PackageInfoPlusAuroraPlugin>(),
        std::make_shared<UrlLauncherAuroraPlugin>(),
        std::make_shared<VideoPlayerAuroraPlugin>(),
    });
}
