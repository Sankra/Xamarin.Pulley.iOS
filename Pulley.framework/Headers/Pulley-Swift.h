// Generated by Apple Swift version 4.1.2 effective-3.3.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Pulley",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class PulleyViewController;

/// The base delegate protocol for Pulley delegates.
SWIFT_PROTOCOL("_TtP6Pulley14PulleyDelegate_")
@protocol PulleyDelegate
@optional
- (void)drawerPositionDidChangeWithDrawer:(PulleyViewController * _Nonnull)drawer;
- (void)makeUIAdjustmentsForFullscreenWithProgress:(CGFloat)progress;
- (void)drawerChangedDistanceFromBottomWithDrawer:(PulleyViewController * _Nonnull)drawer distance:(CGFloat)distance;
@end


/// View controllers in the drawer can implement this to receive changes in state or provide values for the different drawer positions.
SWIFT_PROTOCOL("_TtP6Pulley34PulleyDrawerViewControllerDelegate_")
@protocol PulleyDrawerViewControllerDelegate <PulleyDelegate>
- (CGFloat)collapsedDrawerHeight SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)partialRevealDrawerHeight SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSNumber *> * _Nonnull)supportedDrawerPositions SWIFT_WARN_UNUSED_RESULT;
@end

/// Represents a Pulley drawer position.
/// <ul>
///   <li>
///     collapsed:         When the drawer is in its smallest form, at the bottom of the screen.
///   </li>
///   <li>
///     partiallyRevealed: When the drawer is partially revealed.
///   </li>
///   <li>
///     open:              When the drawer is fully open.
///   </li>
///   <li>
///     closed:            When the drawer is off-screen at the bottom of the view. Note: Users cannot close or reopen the drawer on their own. You must set this programatically
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, PulleyPosition) {
  PulleyPositionCollapsed = 0,
  PulleyPositionPartiallyRevealed = 1,
  PulleyPositionOpen = 2,
  PulleyPositionClosed = 3,
};


/// View controllers that are the main content can implement this to receive changes in state.
SWIFT_PROTOCOL("_TtP6Pulley38PulleyPrimaryContentControllerDelegate_")
@protocol PulleyPrimaryContentControllerDelegate <PulleyDelegate>
@end

@class UIView;
@class UIVisualEffectView;
@class UIColor;
@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC6Pulley20PulleyViewController")
@interface PulleyViewController : UIViewController
/// When using with Interface Builder only! Connect a containing view to this outlet.
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified primaryContentContainerView;
/// When using with Interface Builder only! Connect a containing view to this outlet.
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified drawerContentContainerView;
/// The current content view controller (shown behind the drawer).
@property (nonatomic, readonly, strong) UIViewController * _Null_unspecified primaryContentViewController;
/// The current drawer view controller (shown in the drawer).
@property (nonatomic, readonly, strong) UIViewController * _Null_unspecified drawerContentViewController;
/// The content view controller and drawer controller can receive delegate events already. This lets another object observe the changes, if needed.
@property (nonatomic, weak) id <PulleyDelegate> _Nullable delegate;
/// The current position of the drawer.
@property (nonatomic, readonly) enum PulleyPosition drawerPosition;
@property (nonatomic, readonly) CGFloat visibleDrawerHeight;
/// The background visual effect layer for the drawer. By default this is the extraLight effect. You can change this if you want, or assign nil to remove it.
@property (nonatomic, strong) UIVisualEffectView * _Nullable drawerBackgroundVisualEffectView;
/// The inset from the top of the view controller when fully open.
@property (nonatomic) CGFloat topInset;
/// The corner radius for the drawer.
@property (nonatomic) CGFloat drawerCornerRadius;
/// The opacity of the drawer shadow.
@property (nonatomic) float shadowOpacity;
/// The radius of the drawer shadow.
@property (nonatomic) CGFloat shadowRadius;
/// The opaque color of the background dimming view.
@property (nonatomic, strong) UIColor * _Nonnull backgroundDimmingColor;
/// The maximum amount of opacity when dimming.
@property (nonatomic) CGFloat backgroundDimmingOpacity;
/// The starting position for the drawer when it first loads
@property (nonatomic) enum PulleyPosition initialDrawerPosition;
/// This is here exclusively to support IBInspectable in Interface Builder because Interface Builder can’t deal with enums. If you’re doing this in code use the -initialDrawerPosition property instead. Available strings are: open, closed, partiallyRevealed, collapsed
@property (nonatomic, copy) NSString * _Nullable initialDrawerPositionFromIB;
/// Whether the drawer’s position can be changed by the user. If set to <code>false</code>, the only way to move the drawer is programmatically. Defaults to <code>true</code>.
@property (nonatomic) BOOL allowsUserDrawerPositionChange;
/// Initialize the drawer controller programmtically.
/// note:
/// The drawer VC is 20pts too tall in order to have some extra space for the bounce animation. Make sure your constraints / content layout take this into account.
/// \param contentViewController The content view controller. This view controller is shown behind the drawer.
///
/// \param drawerViewController The view controller to display inside the drawer.
///
///
/// returns:
/// A newly created Pulley drawer.
- (nonnull instancetype)initWithContentViewController:(UIViewController * _Nonnull)contentViewController drawerViewController:(UIViewController * _Nonnull)drawerViewController OBJC_DESIGNATED_INITIALIZER;
/// Initialize the drawer controller from Interface Builder.
/// note:
/// Usage notes: Make 2 container views in Interface Builder and connect their outlets to -primaryContentContainerView and -drawerContentContainerView. Then use embed segues to place your content/drawer view controllers into the appropriate container.
/// \param aDecoder The NSCoder to decode from.
///
///
/// returns:
/// A newly created Pulley drawer.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
/// Set the drawer position, with an option to animate.
/// \param position The position to set the drawer to.
///
/// \param animated Whether or not to animate the change. (Default: true)
///
/// \param completion A block object to be executed when the animation sequence ends. The Bool indicates whether or not the animations actually finished before the completion handler was called. (Default: nil)
///
- (void)setDrawerPositionWithPosition:(enum PulleyPosition)position animated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
/// Set the drawer position, the change will be animated.
/// \param position The position to set the drawer to.
///
- (void)setDrawerPositionWithPosition:(enum PulleyPosition)position;
/// Change the current primary content view controller (The one behind the drawer)
/// \param controller The controller to replace it with
///
/// \param animated Whether or not to animate the change. Defaults to true.
///
/// \param completion A block object to be executed when the animation sequence ends. The Bool indicates whether or not the animations actually finished before the completion handler was called.
///
- (void)setPrimaryContentViewControllerWithController:(UIViewController * _Nonnull)controller animated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
/// Change the current primary content view controller (The one behind the drawer). This method exists for backwards compatibility.
/// \param controller The controller to replace it with
///
/// \param animated Whether or not to animate the change. Defaults to true.
///
- (void)setPrimaryContentViewControllerWithController:(UIViewController * _Nonnull)controller animated:(BOOL)animated;
/// Change the current drawer content view controller (The one inside the drawer)
/// \param controller The controller to replace it with
///
/// \param animated Whether or not to animate the change.
///
/// \param completion A block object to be executed when the animation sequence ends. The Bool indicates whether or not the animations actually finished before the completion handler was called.
///
- (void)setDrawerContentViewControllerWithController:(UIViewController * _Nonnull)controller animated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
/// Change the current drawer content view controller (The one inside the drawer). This method exists for backwards compatibility.
/// \param controller The controller to replace it with
///
/// \param animated Whether or not to animate the change.
///
- (void)setDrawerContentViewControllerWithController:(UIViewController * _Nonnull)controller animated:(BOOL)animated;
/// Update the supported drawer positions allows by the Pulley Drawer
- (void)setNeedsSupportedDrawerPositionsUpdate;
@property (nonatomic, readonly, strong) UIViewController * _Nullable childViewControllerForStatusBarStyle;
@property (nonatomic, readonly, strong) UIViewController * _Nullable childViewControllerForStatusBarHidden;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@class UIScrollView;

@interface PulleyViewController (SWIFT_EXTENSION(Pulley)) <UIScrollViewDelegate>
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end


@interface PulleyViewController (SWIFT_EXTENSION(Pulley)) <PulleyDrawerViewControllerDelegate>
- (CGFloat)collapsedDrawerHeight SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)partialRevealDrawerHeight SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSNumber *> * _Nonnull)supportedDrawerPositions SWIFT_WARN_UNUSED_RESULT;
- (void)drawerPositionDidChangeWithDrawer:(PulleyViewController * _Nonnull)drawer;
- (void)makeUIAdjustmentsForFullscreenWithProgress:(CGFloat)progress;
- (void)drawerChangedDistanceFromBottomWithDrawer:(PulleyViewController * _Nonnull)drawer distance:(CGFloat)distance;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
