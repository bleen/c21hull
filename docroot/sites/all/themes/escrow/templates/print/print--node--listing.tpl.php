<!DOCTYPE html>
<!--[if lt IE 8 ]><html class="lt-ie8 no-js"><![endif]-->
<!--[if gte IE 8]><!--><html class="no-js"  lang="<?php print $print['language']; ?>" dir="ltr" prefix="
 content: http://purl.org/rss/1.0/modules/content/
 dc: http://purl.org/dc/terms/
 foaf: http://xmlns.com/foaf/0.1/
 og: http://ogp.me/ns#
 rdfs: http://www.w3.org/2000/01/rdf-schema#
 sioc: http://rdfs.org/sioc/ns#
 sioct: http://rdfs.org/sioc/types#
 skos: http://www.w3.org/2004/02/skos/core#
 xsd: http://www.w3.org/2001/XMLSchema#
"><!--<![endif]-->
<head>
  <?php print $print['head']; ?>
  <?php print $print['base_href']; ?>
  <title><?php print $print['title']; ?></title>
  <?php print $print['scripts']; ?>
  <?php print $print['sendtoprinter']; ?>
  <?php print $print['robots_meta']; ?>
  <?php print $print['favicon']; ?>
  <?php print $print['css']; ?>
</head>

<body class="printer-friendly listing">
  <?php if (!empty($print['message'])) {
    print '<div class="print-message">'. $print['message'] .'</div><p />';
  } ?>
  <a id="logo" href="/" title="Century21 Roy B. Hull" rel="home">
    Century21 Roy B. Hull</a>
  <div class="print-content"><?php print $print['content']; ?></div>
  <div class="print-footer"><?php print $print['footer_message']; ?></div>
  <div class="print-source_url"><?php print $print['source_url']; ?></div>
  <div class="print-links"><?php print $print['pfp_links']; ?></div>
  <?php print $print['footer_scripts']; ?>
</body>
</html>
