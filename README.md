# XFCoverTransition
Custom Modal transition between UIViewController,Make it more configurable.

![XFCoverTransition usage_touch](./Doc/usage1.gif)

##Usage
###自定义modal
Add `#import "XFCoverTransition.h` to your UIViewController,the `XFPageViewController` is example of your presentedViewController,create `XFCoverTransitionTouch` main class,using `XFCTConfig` class to config your transition.
```objc
// 自定义modal
 XFPageViewController *page = [[XFPageViewController alloc] init];
 page.modalPresentationStyle = UIModalPresentationCustom;
 XFCoverTransitionTouch *ctTouch = [XFCoverTransitionTouch sharedInstance];
 ctTouch.config = [XFCTConfig configWithRenderRect:self.view.bounds animationDuration:0.25 transitionStyle:XFCoverTransitionStyleCoverRight2Left];
 // 添加支持手势
 ctTouch.config.onlyForModalVCGestureDissmiss = YES;
 page.transitioningDelegate = ctTouch;
 [self presentViewController:page animated:YES completion:nil];
```
