api = 2

core = 7.x

projects[browscap_ctools][verison] = 1.0
projects[browscap_ctools][subdir] = contrib

projects[menu_block][version] = 2.3
projects[menu_block][subdir] = contrib

projects[browscap][version] = 1.3
projects[browscap][subdir] = contrib

projects[panels_everywhere][version] = 1.0-rc1
projects[panels_everywhere][subdir] = contrib

projects[twitter_pull][version] = 1.0-rc3
projects[twitter_pull][subdir] = contrib

projects[disqus][version] = 1.9
projects[disqus][subdir] = contrib

projects[backup_migrate][version] = 2.4
projects[backup_migrate][subdir] = contrib

; Fetch the current version of NS Core.
projects[cod][type] = module
projects[cod][version] = 2.x
projects[cod][download][type] = git
projects[cod][download][branch] = 7.x-1.x
projects[cod][download][url] = http://git.drupal.org/project/cod.git
projects[cod][subdir] = contrib

; Fetch the current version of NS Core.
projects[wysiwyg][type] = module
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][download][url] = http://git.drupal.org/project/wysiwyg.git
projects[wysiwyg][subdir] = contrib

projects[adaptivetheme][version] = 3.1
projects[at_panels_everywhere][version] = 3.0-rc1

; Libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.4/ckeditor_3.6.4.tar.gz
libraries[ckeditor][destination] = libraries
