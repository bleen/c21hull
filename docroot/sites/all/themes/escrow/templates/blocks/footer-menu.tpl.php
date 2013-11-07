<?php
/**
 * @file
 * Single menu container.
 */
?>
<div class="menu-block <?php print $class; ?>">
  <?php if ($menu_title): ?>
    <h2 class="title"><?php print $menu_title ?></h2>
  <?php endif; ?>
  <?php print render($menu_output); ?>
</div>
