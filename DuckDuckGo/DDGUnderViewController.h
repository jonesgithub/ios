//
//  DDGUnderViewController.h
//  DuckDuckGo
//
//  Created by Ishaan Gulrajani on 8/14/12.
//
//

#import <UIKit/UIKit.h>
#import "DDGSearchHandler.h"
#import "DDGTabViewController.h"

typedef NS_ENUM(NSInteger, DDGViewControllerType) {
    DDGViewControllerTypeHome = 0,
    DDGViewControllerTypeSaved,
    DDGViewControllerTypeStories,
    DDGViewControllerTypeHistory,
    DDGViewControllerTypeSettings,
    DDGViewControllerTypeDuck
};

@class DDGSettingsViewController, DDGStory;

@interface DDGUnderViewController : UIViewController <DDGSearchHandler, DDGTabViewControllerDelegate, NSFetchedResultsControllerDelegate> {
}
@property (nonatomic, readonly, strong) NSManagedObjectContext *managedObjectContext;

- (id)initWithManagedObjectContext:(NSManagedObjectContext *)moc;

//-(void)configureViewController:(UIViewController *)viewController;

- (UIViewController *)viewControllerForType:(DDGViewControllerType)type;
@end
