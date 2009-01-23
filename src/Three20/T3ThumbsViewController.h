#import "Three20/T3TableViewController.h"
#import "Three20/T3PhotoSource.h"

@interface T3ThumbsViewController : T3TableViewController <T3PhotoSourceDelegate> {
  id<T3PhotoSource> photoSource;
  UIBarStyle previousBarStyle;
  BOOL goingBack;
}

@property (nonatomic, retain) id<T3PhotoSource> photoSource;

@end