// Autogenerated from Pigeon (v3.0.3), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN


/// The codec used by MesiboPluginMesiboPluginApi.
NSObject<FlutterMessageCodec> *MesiboPluginMesiboPluginApiGetCodec(void);

@protocol MesiboPluginMesiboPluginApi
- (void)setupToken:(NSString *)token error:(FlutterError *_Nullable *_Nonnull)error;
- (void)sendMessagePeer:(NSString *)peer message:(NSString *)message error:(FlutterError *_Nullable *_Nonnull)error;
- (void)showUserListWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)showMessagesPeer:(NSString *)peer error:(FlutterError *_Nullable *_Nonnull)error;
- (void)audioCallPeer:(NSString *)peer error:(FlutterError *_Nullable *_Nonnull)error;
- (void)videoCallPeer:(NSString *)peer error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void MesiboPluginMesiboPluginApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<MesiboPluginMesiboPluginApi> *_Nullable api);

NS_ASSUME_NONNULL_END
