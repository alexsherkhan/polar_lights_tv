import 'package:flutter_riverpod/flutter_riverpod.dart';
import 'package:polar_lights_tv/business_logic/model/channel.dart';
import 'package:polar_lights_tv/business_logic/services/network.dart';

final mainChannels = FutureProvider<List<ChannelObj>?>((ref) async {


  return await fetchChannels();
});
